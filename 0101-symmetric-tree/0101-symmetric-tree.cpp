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
public:
    bool isSymmetric(TreeNode* root) {
       return isEq(root->right,root->left);
        
        
    }
    
    bool isEq(TreeNode* r,TreeNode* l)
    {
      if(!r||!l)return r==l;
        
        if(r->val==l->val)
        return(isEq(r->right,l->left)&&isEq(r->left,l->right));
        return false;
    }
};