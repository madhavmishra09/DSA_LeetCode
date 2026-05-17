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
    int total=0;
    int dfs(TreeNode* root){
        if(root==nullptr) return 0;
        int ls=0;
        int rs=0;
        ls+=dfs(root->left);
        rs+=dfs(root->right);
        total+=abs(ls-rs);
        return ls+rs+root->val;
    }
    int findTilt(TreeNode* root) {
        dfs(root);
        return total;
    }
};