/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var ans =[]
function fun(root)
{
    if(!root) return;
    fun(root.left);
    ans.push(root.val);
    fun(root.right);
}
var inorderTraversal = function(root) {
    ans= []
    fun(root)
    return ans;
};