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
    public int rangeSumBST(TreeNode root, int L, int R) {
        if(null == root)
            return 0;
        else
            return (((root.val >= L) && (root.val <= R)) ? root.val : 0) + rangeSumBST(root.left, L, R) + rangeSumBST(root.right, L, R);
    }
}
