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
class Solution {
    private boolean func(TreeNode l,TreeNode r)
    {
        if(l==null||r==null)return l==null&&r==null?true:false;
        if(l.val!=r.val)return false;
        return func(l.right,r.left)&func(l.left,r.right);
    }
    public boolean isSymmetric(TreeNode root) {
        return func(root.right,root.left);
    }
}