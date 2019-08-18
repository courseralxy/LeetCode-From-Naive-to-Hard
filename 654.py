# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def newConstructMaximumBinaryTree(self, nums: List[int], left, right) -> TreeNode:
        if left > right:
            return None
        if left == right:
            return TreeNode(nums[left])
        index = left;
        max = nums[left]
        
        for i in range(left + 1, right + 1):
            if nums[i] > max:
                max = nums[i]
                index = i
        
        root = TreeNode(max)
        root.left = self.newConstructMaximumBinaryTree(nums, left, index - 1)
        root.right = self.newConstructMaximumBinaryTree(nums, index + 1, right)
        return root
    
    def constructMaximumBinaryTree(self, nums: List[int]) -> TreeNode:
        return self.newConstructMaximumBinaryTree(nums, 0, len(nums) - 1)
