/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
//import java.system;
import java.io.*;

class Solution {
    public int maxDepth(TreeNode root) {
        if(root==null) return 0;
        //System.out.println(root.left.val);
        else return Math.max(maxDepth(root.left),maxDepth(root.right))+1;
    }
}