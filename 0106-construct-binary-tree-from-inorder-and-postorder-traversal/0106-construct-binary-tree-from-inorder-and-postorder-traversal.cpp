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
    vector<int>in,post;
    TreeNode* fun(int i,int j,int x,int y)
    {
        if(i>j) return nullptr;
        TreeNode *root=new TreeNode();
        root->val=post[y];
        int mid=i;
        while(in[mid]!=post[y]) mid++;
        root->left=fun(i,mid-1,x,y-(j-mid+1));
        root->right=fun(mid+1,j,mid-1,y-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode * root=new TreeNode();
        in=inorder;
        post=postorder;
        return fun(0,inorder.size()-1,0,postorder.size()-1);
    }
};