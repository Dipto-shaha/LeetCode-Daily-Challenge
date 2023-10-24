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
    vector<int>ans;
    void fun(TreeNode* root,int h)
    {
        if(!root) return;
        if(ans.size()<=h)
            ans.push_back(root->val);
        else ans[h]=max(ans[h],root->val);
        fun(root->left,h+1);
        fun(root->right,h+1);
    }
    vector<int> largestValues(TreeNode* root) {
        fun(root,0);
        return ans;
    }
};