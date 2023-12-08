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
 * @return {string}
 */
var ans = "";
function fun(root){
    //console.log(ans);
    if(root==null) return "";
    ans=ans+''+root.val;
    var flag=false;
    if(root.left)
    {
        flag=true;
        ans+='(';
        fun(root.left);
        ans+=')';
    }
    if(root.right)
    {
        if(!flag)
            ans+="()";
        ans+='(';
        fun(root.right);
        ans+=')';
    }
    return ans;
    
} 
var tree2str = function(root) {
    ans="";
    return fun(root);
};