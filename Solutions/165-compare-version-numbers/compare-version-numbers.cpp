class Solution {
public:
    int compareVersion(string version1, string version2) {
        version1 += '.';
        version2 += '.';
        int n1 = version1.size(), n2 = version2.size();
        vector<int> hash1;
        vector<int> hash2;
        string s1 = "", s2 = "";
        for (auto it : version1) {

            if (it != '.') {
                s1 += it;
            } else {
                int num = stoi(s1);
                hash1.push_back(num);
                s1 = "";
            }
        }
        for (auto it : version2) {

            if (it != '.') {
                s2 += it;
            } else {
                int num = stoi(s2);
                hash2.push_back(num);
                s2 = "";
            }
        }
        for(int i=0; i<min(hash1.size(),hash2.size());i++){
            if(hash1[i]>hash2[i]){
                return 1;
            }
            else if(hash1[i]<hash2[i])
            return -1; 

        }
        if(hash1.size()>hash2.size()){
            for(int i=min(hash1.size(),hash2.size()); i<hash1.size(); i++){
                if(hash1[i]>0)return 1;
            }
        }
        if(hash2.size()>hash1.size()){
            for(int i=min(hash1.size(),hash2.size()); i<hash2.size(); i++){
                if(hash2[i]>0)return -1;
            }
        }
        return 0;

        
    }
};