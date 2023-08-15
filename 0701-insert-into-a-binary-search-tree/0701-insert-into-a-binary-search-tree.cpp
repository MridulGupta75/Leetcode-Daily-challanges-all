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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            root=new TreeNode(val);
            return root;
        }
        TreeNode* root1=root;
        while(root)
        {
            if(root->val>val)
                if(root->left)root=root->left;
                else break;
            else 
                if(root->right)root=root->right;
                else break;
        }
        if(root->val>val)root->left=new TreeNode(val);
        else root->right=new TreeNode( val);
        return root1;
        
        
    }
};