/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool flag=true;
    private:
     int maxDepth(TreeNode* root) {
        if(!root)return 0;
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
         if(abs(l-r)>1)flag=false;
        return (1+max(l,r));
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        // bool l=isBalanced(root->left);
        // bool m=isBalanced(root->right);
        // if(!l||!m)return false;
        // int lt=maxDepth(root->left);
        // int rt=maxDepth(root->right);
        // return abs(rt-lt)<=1?true:false;
        maxDepth(root);
        return flag;
    }
};