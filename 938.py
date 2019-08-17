# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        if(None == root):
            return 0
        else:
            return (root.val if ((root.val >= L) and (root.val <= R)) else 0) + self.rangeSumBST(root.left, L, R) + self.rangeSumBST(root.right, L, R);
