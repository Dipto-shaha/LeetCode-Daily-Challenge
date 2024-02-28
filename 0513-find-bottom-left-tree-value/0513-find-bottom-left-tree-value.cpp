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
    int ans=0,h=-1;
    void fun(TreeNode* root,int n){
        if(!root) return;
        if(n>h) ans=root->val,h=n;
        fun(root->left,n+1);
        fun(root->right,n+1);
    }
    int findBottomLeftValue(TreeNode* root) {        
       fun(root,0);
       return ans; 
    }
};