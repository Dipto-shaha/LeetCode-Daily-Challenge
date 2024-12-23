# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def minimumOperations(self, root):
        ans = 0
        node = []
        node.append(root)
        while len(node):
            l = len(node)
            position = []
            posindex = {}
            i = 0
            while l>0:
                temp  =  node.pop(0)
                if temp.left:
                    node.append(temp.left)
                    position.append(temp.left.val)
                    posindex[temp.left.val] = i
                    i+=1
                if temp.right:
                    node.append(temp.right)
                    position.append(temp.right.val)
                    posindex[temp.right.val] = i
                    i+=1
                l-=1
            sorted_position  = sorted(position)
            l = len(position)
            for i in range(l):
                if sorted_position[i] != position[i]:
                    ans +=1
                    position[posindex[sorted_position[i]]] = position[i]
                    posindex[position[i]]=posindex[sorted_position[i]]
                    position[i] = sorted_position[i]

        return ans
            
            
                
        