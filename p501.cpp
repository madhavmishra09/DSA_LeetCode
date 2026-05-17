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
    vector<int> modes;
    int max=0;
    int c=0;
    int p=INT_MIN;
    void inorder(TreeNode* root){
        if(root==nullptr) return;
        inorder(root->left);
        if(root->val==p)
        {
            c++;
        }
        else
        {
            c=1;
        }
        if(c>max)
        {
            modes.clear();
            modes.push_back(root->val);
            max=c;
        }
        else if(c==max)
        {
            modes.push_back(root->val);
        }
        p=root->val;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return modes;
    }
};