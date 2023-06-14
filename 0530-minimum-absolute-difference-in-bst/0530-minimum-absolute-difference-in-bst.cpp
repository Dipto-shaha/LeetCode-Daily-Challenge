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
    int ans= INT_MAX,last=-1;
    void fun(TreeNode* root)
    {
        if(!root) return;
        fun(root->left);
        if(last!=-1) 
            ans=min(ans,abs(last-root->val));
        last=root->val;
        fun(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        fun(root);
        return ans; 
    }
};