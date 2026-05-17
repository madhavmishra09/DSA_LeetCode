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
    int getMinimumDifference(TreeNode* root) {
        int mind=INT_MAX;
        int pv=-1;
        stack<TreeNode*> st;
        while(root||!st.empty())
        {
            while(root)
            {
                st.push(root);
                root=root->left;
            }
            root=st.top();
            st.pop();
            if(pv>=0)
        {
            mind=min(mind,root->val-pv);
        }
        pv=root->val;
        root=root->right;
        }
        return mind;    
    }
};