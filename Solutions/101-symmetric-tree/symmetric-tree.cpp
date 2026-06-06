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
    bool dfs(TreeNode *l, TreeNode*r){
        if(!l && !r) return 1;
        if(!l || !r)return 0; 
        if(l->val!=r->val)return 0;
       if( dfs(l->right,r->left) && dfs(r->right,l->left)) return 1;
       return 0;


    }
    bool isSymmetric(TreeNode* root) {
        if(!root->left && ! root->right)return 1;
        if(!root->left || ! root->right)return 0;
        return dfs(root->left, root->right);

        
    }
};