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
    // void dfs(TreeNode *node,int curr, int &ans){
    //     if(!node){
    //         ans=max(ans,curr);
    //         return;
    //     }
    //     dfs(node->left,curr+1,ans);
    //     dfs(node->right,curr+1,ans);


    // }
    int d(TreeNode *node){
        if(!node) return 0;
        return 1+ max(d(node->left),d(node->right));


    }
    int maxDepth(TreeNode* root) {
        // int ans=0;
        return d(root);
        // return ans;
        
    }
};
//         1
//       /   \
//      2     3
//     /     / \
//    4     5   6
//         /
//        7
//       /
//      8