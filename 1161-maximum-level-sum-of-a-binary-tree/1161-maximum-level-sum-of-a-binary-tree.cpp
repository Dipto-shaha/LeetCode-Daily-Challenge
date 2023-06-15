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
    map<int,int>m;
    void fun(TreeNode* root,int l)
    {
        if(!root) return;
        m[l]+=root->val;
        fun(root->left,l+1);
        fun(root->right,l+1);
        
    }
    int maxLevelSum(TreeNode* root) {
        fun(root,1);
        int cnt=INT_MIN,ans;
        for(auto u:m)
        {
            if(u.second>cnt)
                cnt=u.second,ans=u.first;
        }
        return ans;
    }
};