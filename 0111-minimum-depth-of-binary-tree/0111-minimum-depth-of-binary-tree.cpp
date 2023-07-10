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
    int ans=INT_MAX;
    void fun(TreeNode* root,int h)
    {
        if(!root->left && !root->right) 
        {
            ans=min(ans,h);
            return;
        }
        if(root->left) fun(root->left,h+1);
        if(root->right) fun(root->right,h+1);
    }
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        fun(root,1);
        return ans;
    }
};