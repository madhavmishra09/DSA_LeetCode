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
    
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int ld=minDepth(root->left);
        int rd=minDepth(root->right);
        if(ld==0) return 1+rd;
        if(rd==0) return 1+ld;
        return 1+std::min(ld,rd);
    }
};