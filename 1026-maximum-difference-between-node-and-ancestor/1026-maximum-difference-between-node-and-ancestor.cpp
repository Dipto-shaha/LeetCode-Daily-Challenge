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
    void fun(TreeNode* root,int mn,int mx)
    {
        if(!root) {
           ans=max(ans,(mx-mn));
           return;
        }
        fun(root->left,min(root->val,mn),max(root->val,mx));
        fun(root->right,min(root->val,mn),max(root->val,mx));
    }
    int maxAncestorDiff(TreeNode* root) {
        ans=INT_MIN;
        fun(root,root->val,root->val);
        return ans;
    }
};