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
    void graph(TreeNode* root,vector<vector<int>>&g){
         if(!root) return;
         if(root->left)
         {
             g[root->val].push_back(root->left->val);
             g[root->left->val].push_back(root->val);
             graph(root->left,g);
         }
         if(root->right)
         {
             g[root->val].push_back(root->right->val);
             g[root->right->val].push_back(root->val);
             graph(root->right,g);
         }
    }
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>>g(1e5+1);
        graph(root,g);
        queue<int>q;
        int mark[100001];
        memset(mark,-1,sizeof(mark));
        q.push(start);
        int ans=-1;
        mark[start]=0;
        while(!q.empty())
        {
            int t=q.size();
            ans++;
            while(t--)
            {
                auto u =q.front();
                q.pop();
                for(auto v:g[u])
                {
                    if(mark[v]==-1)
                       q.push(v);
                    mark[v]=0;
                }
            }
        }
        return ans;
    }
};