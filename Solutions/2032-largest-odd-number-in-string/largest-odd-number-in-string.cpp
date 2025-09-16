class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for(int i=n-1; i>=0; i--){
            if(num[i]=='1'||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9'){
                return num;
            }
    
                // num.erase(num.begin()+i);
                num.pop_back();
            
        }
        return num;
    }
};