class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
     int n=arr.size();
        int cand1=arr[0],cand2;
        int one=0,two=0;
        bool once=0;
        for(auto it:arr){
    
            
            if(it!=cand1 && once==0){
                cand2=it;
                once=1;
            }
            
            
            if(it==cand1) one++;
            else if(it==cand2) two++;
            
            else if(one==0 ){
                cand1=it;
                one=1;
            }
            else if (two==0 ){
                cand2=it;
                two=1;
            }
            
            else{
                one--;
                two--;
            }
            
            
        }
        one=two=0;
        vector <int> ans;
        for(auto it:arr){
            if(it==cand1)one++;
            else if(it==cand2)two++;
        }
        if(two>n/3)ans.push_back(cand2);
        if(one>n/3)ans.push_back(cand1);
        // sort(ans.begin(),ans.end());
        return ans;

     
        
    }
};