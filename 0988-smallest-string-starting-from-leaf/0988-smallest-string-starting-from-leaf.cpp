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
    string ans="";
    void fun(TreeNode* root, string curr){
        if(!root){
            if(ans=="") ans=curr;
            if(curr<ans) ans=curr;
            return ;
        }
        int flag=1;
        if(root->left)
            fun(root->left,char(root->val+'a')+curr),flag=0;
        if(root->right)
            fun(root->right,char(root->val+'a')+curr),flag=0;
        if(flag)
            fun(root->right,char(root->val+'a')+curr);
    }
    string smallestFromLeaf(TreeNode* root) {
        fun(root,"");
        return ans;
    }
};