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
    int ans=0;
    void fun(TreeNode* root ,int l,int cnt)
    {
        if(!root) return ;
        ans=max(ans,cnt);
        if(l!=0)
        {
            fun(root->left,0,cnt+1);
            fun(root->right,1,1);
        }
        else
        {
            fun(root->right,1,cnt+1);
            fun(root->left,0,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        if(!root) return 0;
        fun(root->right,1,1);
        fun(root->left,0,1);
        return ans;
    }
};