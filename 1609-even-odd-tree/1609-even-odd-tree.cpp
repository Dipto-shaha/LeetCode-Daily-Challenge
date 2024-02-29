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
    int value[100000]={0};
    bool fun(TreeNode* root,int h)
    {
        
        if(!root) return true;
        if(h%2 == root->val%2) return false;
        if(h%2==0){
            if(value[h]==0 || root->val > value[h])
                value[h]=root->val;
            else return false;
        }
        else{
            if(value[h]==0 || root->val < value[h])
                value[h]=root->val;
            else return false;
        }
        return fun(root->left,h+1) && fun(root->right,h+1);
    }
    bool isEvenOddTree(TreeNode* root) {
         return fun(root,0);
    }
};