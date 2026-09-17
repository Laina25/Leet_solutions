# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def zigzagLevelOrder(self, root):
        if root == None:
            return []
        Q = []
        Q.append(root)
        res = []
        flag = False
        while Q:
            level = []
            n = len(Q) 
            for i in range(n):
                node = Q.pop(0)
                level.append(node.val)
                if node.left != None:
                    Q.append(node.left)
                if node.right != None:  
                    Q.append(node.right)
            if flag :
                res.append(level[::-1])
            else:
                res.append(level)
            flag = not flag
        return res
            
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        