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
    int ans;
    int dfs(TreeNode *node){
        if(!node)return 0;
        // int nl=
        // dfs(node->left);
        // dfs(node->right)     
        return 1+ max(dfs(node->left),dfs(node->right));
        

    }
    bool d(TreeNode *node){
        if(!node)return 1;
        if(abs(dfs(node->left)-dfs(node->right))>=2) return 0;
        if(d(node->left) && d(node->right)) return 1;
        return 0;
    }

    bool isBalanced(TreeNode* root) {
        return d(root);
        
    }
};