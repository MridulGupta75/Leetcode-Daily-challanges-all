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
private:
    bool isBST(TreeNode*root,long x,long y)
    {
        if(!root)return true;
        if(x>=root->val||root->val>=y)return false;
        return isBST(root->left,x,root->val)&isBST(root->right,root->val,y);
        
    }
public:
    bool isValidBST(TreeNode* root) {
       return isBST(root,LONG_MIN,LONG_MAX);
    }
};