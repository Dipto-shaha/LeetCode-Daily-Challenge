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
    vector<unsigned long long>v[3001];
    void fun(TreeNode* root,int h,unsigned long long cnt)
    {
        if(!root) return;
        v[h].push_back(cnt);
        fun(root->left,h+1,2*cnt);
        fun(root->right,h+1,2*cnt+1);
    }
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0;
        fun(root,0,1);
        for(auto u:v)
        {
            if(u.size()==0) break;
            ans=max(ans,(int)(u[u.size()-1]-u[0]+1));
        }
        return ans;
    }
};