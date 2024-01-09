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
    vector<int>v;
    void fun(TreeNode* root)
    {
        if(!root) return ;
        if(!root->left && !root->right)  v.push_back(root->val);
        fun(root->left);
        fun(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         vector<int>first;
         fun(root1);
         first=v;
         v.clear();
         fun(root2);
         if(v.size()!=first.size()) return false;
         for(int i=0;i<v.size();i++)
         {
             if(v[i]!=first[i]) return false;
         }
         return true;
    }
};