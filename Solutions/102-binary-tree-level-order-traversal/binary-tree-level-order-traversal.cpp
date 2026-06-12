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
    // void dfs(<vector <vector <int>> &ans,TreeNode * node, int i){
    //     if( !node )return ;
    //     if(i== ans.size()) {
    //         ans.push_back({});
    //         ans.push_back(root[i]);
    //     }



    // }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        vector <vector <int>> ans;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector <int> level;
            for(int i=0; i<n; i++){
                TreeNode * v= q.front();
               if(v->left) q.push(v->left);
               if(v->right) q.push(v->right);
               level.push_back(v->val);
               q.pop();     

            }
            ans.push_back(level);


        }
        return ans;
    }
};