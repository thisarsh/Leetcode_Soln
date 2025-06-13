class Solution {
public:

    vector<int> plusOne(vector<int>& digits) {
        
        
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]++;
            return digits;
        }

        if(n==1 && digits[0]==9)return {1,0};
        vector <int> ans;
        reverse(digits.begin(),digits.end());
        // carry=0;
        digits[0]=0;
        for (int i=1; i<n; i++){
            
            if(digits[i]!=9){
            digits[i]++;
            reverse(digits.begin(),digits.end());
            return digits;}
            else digits[i]=0;
            if(i==n-1){
                vector <int> ne (n+1,0);
                ne[0]=1;
                return ne;
            }
            
        }
return digits;


    }
};