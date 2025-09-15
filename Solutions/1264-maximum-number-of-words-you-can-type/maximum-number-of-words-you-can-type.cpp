class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0,found=0;
        for(int i=0; i<text.size();i++){
             if(text[i]==' ' && found==0){
                    count++;
                }
            if(text[i]==' ' && found==1){
                found=0;
            }
            for(int j=0; j<brokenLetters.size();j++){
                if(text[i]==brokenLetters[j]){
                    found=1;
                }
            }
            
                

        }
       if(found==0)count++;
        return count;
    }
};