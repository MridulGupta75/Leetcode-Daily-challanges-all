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
 
    
    
    void inorder(vector<int>&sol,TreeNode* root)
    {
        if(root!=NULL){
        sol.push_back(root->val);
        inorder(sol,root->left);
        
        inorder(sol,root->right);
        }
     
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>sol;
        inorder(sol,root);
        return sol;
        
    }
};