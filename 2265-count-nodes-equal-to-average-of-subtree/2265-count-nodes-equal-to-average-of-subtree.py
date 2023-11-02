# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def __init__(self):
        self.ans=0
    def fun(self,root):
        if not root:
            return [0,0]
        x=self.fun(root.left)
        y=self.fun(root.right)
        total=root.val+x[0]+y[0]
        totalcnt=1+x[1]+y[1]
        if total/totalcnt==root.val:
            self.ans+=1;
        return [total,totalcnt]
        
        
    def averageOfSubtree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        self.fun(root)
        return self.ans
        