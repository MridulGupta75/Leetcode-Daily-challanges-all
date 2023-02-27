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
    
    void makeBst(int data, TreeNode*&temp)
    {
        if(temp==NULL)
        {
             temp= new TreeNode(data);
            return ;
        }
        else if(data>temp->val)
            makeBst(data,temp->right);          
         else if(data<temp->val)
            makeBst(data,temp->left);     
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        
        TreeNode*root= new TreeNode(preorder[0]);
        TreeNode *temp=root;
        for(int i=1;i<preorder.size();i++)
            makeBst(preorder[i],temp);
            return root;
        
    }
};