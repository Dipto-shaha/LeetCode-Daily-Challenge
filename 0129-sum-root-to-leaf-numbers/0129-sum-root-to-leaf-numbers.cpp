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
    int sum = 0;
    void pathSum(TreeNode* root , int val){
        if(!root->left && !root->right){
            sum+=val*10+root->val;
            return;
        }
        if(root->left)
            pathSum(root->left,val*10+root->val);
        if(root->right)
            pathSum(root->right,val*10+root->val);
        
    }
    int sumNumbers(TreeNode* root) {
        pathSum(root,0);
        return sum;
    }
};