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
   int findIndex(int val,vector<int>&inorder,int start,int end)
   {
       for(int i=start;i<=end;i++)
           if(inorder[i]==val)return i;
       return -1;
   } 
    TreeNode* makeTree(TreeNode*root , int&pre_idx , vector<int>&inorder, int start , int end , vector<int>&preorder)
    {
        if(pre_idx>=preorder.size())return NULL;
        int idx=findIndex(preorder[pre_idx],inorder,start,end);
        if(idx==-1)return NULL;
        if(root==NULL) root=new TreeNode(preorder[pre_idx]),pre_idx++;
        root->left=makeTree(root->left,pre_idx,inorder,start,idx-1,preorder);
        root->right=makeTree(root->right,pre_idx,inorder,idx+1,end,preorder);
        return root;
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre=0;
        return makeTree(NULL,pre,inorder,0,inorder.size()-1,preorder);
        
    }
};