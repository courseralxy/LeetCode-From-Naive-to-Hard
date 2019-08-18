/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode constructMaximumBinaryTree(int[] nums) {
        return constructMaximumBinaryTree(nums, 0, nums.length - 1);
    }
    
    private TreeNode constructMaximumBinaryTree(int[] nums, int left, int right){
        if(left > right)
            return null;
        if(left == right)
            return new TreeNode(nums[left]);
        int index = left;
        int max = nums[left];
        for(int i = left + 1; i <= right; i++)
            if(nums[i] > max){
                index = i;
                max = nums[i];
            }
        TreeNode root = new TreeNode(max);
        root.left = constructMaximumBinaryTree(nums, left, index - 1);
        root.right = constructMaximumBinaryTree(nums, index + 1, right);
        return root;
        
    }
}
