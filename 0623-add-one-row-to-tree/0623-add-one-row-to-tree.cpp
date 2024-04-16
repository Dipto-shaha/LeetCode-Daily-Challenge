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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left=root;
            return newRoot;
        }
        queue<TreeNode*>q;
        q.push(root);
        int h=1,cnt;
        while(!q.empty()){
            if(h==depth-1){
                while(!q.empty()){
                    TreeNode* now= q.front();
                    q.pop();
                    TreeNode* temp;
                    temp=now->left;
                    now->left=new TreeNode(val);
                    now->left->left=temp;
                    temp=now->right;
                    now->right=new TreeNode(val);
                    now->right->right=temp;
                }
                break;
            }
            cnt=q.size();
            while(cnt--){
                TreeNode* now= q.front();
                q.pop();
                if(now->left)
                    q.push(now->left);
                if(now->right)
                    q.push(now->right);
            }
            h++;
        }
        return root;
    }
};