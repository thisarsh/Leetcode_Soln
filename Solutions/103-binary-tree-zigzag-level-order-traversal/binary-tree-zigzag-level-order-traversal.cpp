/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)return {};
        vector <vector <int>> ans;
        queue <TreeNode *> q;
        q.push(root);
        // int count=0;
        while(!q.empty()){
            int n=q.size();
            vector <int> level;
           
            for(int i=0; i<n; i++){
                 TreeNode * v=q.front();
              
                    if(v->left)q.push(v->left);
                    if(v->right)q.push(v->right);
                    
               

               level.push_back(v->val);
                q.pop();

            }
            if(ans.size()%2!=0)
           reverse(level.begin(),level.end());
             ans.push_back(level);
        }
        return ans;

    }
};