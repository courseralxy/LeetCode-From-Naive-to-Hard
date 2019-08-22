# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        tmpRoot = root;
        newNode = TreeNode(val)
        parentNode = None;
        while tmpRoot != None:
            parentNode = tmpRoot
            if tmpRoot.val > val:
                tmpRoot = tmpRoot.left
            else:
                tmpRoot = tmpRoot.right
        if parentNode.val > val:
            parentNode.left = newNode
        else:
            parentNode.right = newNode
        return root
