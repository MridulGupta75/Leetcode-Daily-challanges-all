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
    void makeBst(TreeNode*&temp,int data)
    {
        if(temp==NULL)
        {
            temp=new TreeNode(data);
            return;
        }
        else if(temp->val<data)
        makeBst(temp->right,data);
        else if(temp->val>data)
        makeBst(temp->left,data);
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        
        TreeNode*root= new TreeNode(preorder[0]);
        TreeNode *temp=root;
       for(int i=1;i<preorder.size();i++)
            makeBst(temp,preorder[i]);
        return root;
        
    }
};