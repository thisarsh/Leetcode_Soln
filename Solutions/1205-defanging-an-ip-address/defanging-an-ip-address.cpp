class Solution {
public:
    string defangIPaddr(string address) {
        string ans="",add="[.]";
        for(auto it:address){
            if(it!='.')ans+=it;
            else ans+=add;
        }
        return ans;
    }
};