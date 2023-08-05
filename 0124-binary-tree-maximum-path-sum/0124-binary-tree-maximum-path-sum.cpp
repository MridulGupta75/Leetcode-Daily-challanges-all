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
    int maxi=0;
    int func(TreeNode* root)
    {
        
        if(root==NULL)return 0;
        int l=max(0,func(root->left));
        int r=max(0,func(root->right));
        maxi=max(maxi,(root->val)+l+r);
        return root->val+max(l,r);
        
    }
    int maxPathSum(TreeNode* root) {
        maxi=root->val;
        func(root);
        return maxi;
    }
};