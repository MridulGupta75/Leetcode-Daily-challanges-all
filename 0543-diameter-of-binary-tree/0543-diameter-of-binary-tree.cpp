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
    int maxi=0;
    int func(TreeNode* root)
    {
        if(root==NULL)return 0;
        int l=func(root->left);
        int r=func(root->right);
        maxi=max(maxi,l+r);
        return 1+max(l,r);
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       func(root);
       return maxi;
    }
};