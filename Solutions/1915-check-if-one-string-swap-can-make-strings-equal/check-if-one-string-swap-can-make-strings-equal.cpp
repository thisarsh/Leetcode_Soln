class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        string s01=s1,s02=s2;
        if(s1==s2)return 1;
        if(s1.size()!=s2.size())return 0;
        int p1=-1,p2=-1,count=0;
        for(int i=0; i<s1.size();i++){
            if(s1[i]!=s2[i] && count==0){p1=i;count++;}
            else if(count==1 && s1[i]!=s2[i]){p2=i;count++;break;}
            

        }if (count==1)return 0;
        swap(s1[p1],s1[p2]);
        if(s1==s2)return 1;
        return 0;








    
        // s1=s01;
        // s2=s02;        
        // for(int i=0; i<s1.size()-1;i++){
        //     for(int j=1; j<s1.size();j++){
        //         swap(s1[i],s1[j]);
        //         if(s1==s2)return 1;
        //         else s1=s01;
        //     }
        // }return 0;
    }
};