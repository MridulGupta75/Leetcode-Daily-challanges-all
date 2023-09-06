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
    bool func(TreeNode* l,TreeNode*r)
    {
        if(!l||!r) return !l&&!r?true:false;
        if(l->val!=r->val)return false;
        bool ll=func(l->left,r->right);
        ll=ll&&func(l->right,r->left);
        return ll;
        
    }
public:
    bool isSymmetric(TreeNode* root) {
        return func(root->left,root->right);
    }
};