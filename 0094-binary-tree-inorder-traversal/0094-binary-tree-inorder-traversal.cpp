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
        
        inorder(sol,root->left);
        sol.push_back(root->val);
        inorder(sol,root->right);
        }
     
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>sol;
        // inorder(sol,root);
        // return sol;
        
        //morris Inorder
        TreeNode*curr=root;
        while(curr!=NULL)
        {
            if(curr->left!=NULL)
            {
                TreeNode*pre=curr->left;
                while(pre->right&&pre->right!=curr)
                    pre=pre->right;
                if(pre->right==NULL) pre->right=curr,curr=curr->left;
                else 
                {
                    sol.push_back(curr->val);
                    pre->right=NULL;
                    curr=curr->right;
                }
            }
            else
            {
                 sol.push_back(curr->val);
                curr=curr->right;
            }
        }
        return sol;
        
    }
};