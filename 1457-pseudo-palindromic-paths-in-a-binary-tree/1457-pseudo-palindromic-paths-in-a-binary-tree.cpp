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
    void fun(TreeNode* root,vector<int>f)
    {
        if(!root)
        {
            int cnt=0;
            for(int i=0;i<10;i++)
            {
                if(f[i]%2) cnt++;
            }
            if(cnt<=1) ans++;
            return;
        }
        f[root->val]++;
        if(root->left && root->right)
            fun(root->left,f),fun(root->right,f);
        else if(root->left)
            fun(root->left,f);
        else if(root->right)
            fun(root->right,f);
        else fun(root->left,f);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        ans=0;
        vector<int>f(10,0);
        fun(root,f);
        return ans;
    }
};