# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def recoverTree(self, root):
        self.first = None
        self.second = None
        self.third = None
        def inorder(root):
            if not root:
                return
            inorder(root.left)
            if self.first and self.first.val > root.val:
                if self.second == None:
                    self.second = self.first
                self.third = root  
            self.first = root
            inorder(root.right)
        inorder(root)
        if self.second and self.third:
            self.second.val,self.third.val = self.third.val,self.second.val        
        """
        :type root: Optional[TreeNode]
        :rtype: None Do not return anything, modify root in-place instead.
        """
        