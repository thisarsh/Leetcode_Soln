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
    int depth(TreeNode *root,int count){
        if(!root)return 0;
        int ldepth=depth(root->left ,count+1);
        int rdepth=depth(root->right ,count+1);

        return max(ldepth,rdepth)+1;


        

    }
public:
    int maxDepth(TreeNode* root) {
        return depth(root,0);
        
    }
};