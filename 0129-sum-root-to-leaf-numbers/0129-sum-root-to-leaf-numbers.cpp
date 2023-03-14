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
    void fun(TreeNode* root,int num)
    {
        if(!root->left && !root->right ) {
            ans+=num*10+root->val;
            return;
        }
        if(root->left)
        fun(root->left,num*10+root->val);
        if(root->right)
        fun(root->right,num*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        ans=0;
        fun(root,0);
        return ans;
    }
};