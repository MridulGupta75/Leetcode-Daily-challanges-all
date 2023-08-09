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
    int visited(vector<bool>&vis_pre)
    {
        for(int i=0;i<vis_pre.size();i++)
            if(!vis_pre[i])return i;
        return -1;
    }
    
    TreeNode* makeTree(TreeNode*root , vector<bool>&vis_pre , vector<int>&inorder, int start , int end , vector<int>&preorder)
    {
        int pre_idx=visited(vis_pre);
        if(pre_idx==-1)return NULL;
        int idx=findIndex(preorder[pre_idx],inorder,start,end);
        if(idx==-1)return NULL;
        if(root==NULL)
        {
        root=new TreeNode(preorder[pre_idx]);
        vis_pre[pre_idx]=true;
        }
        root->left=makeTree(root->left,vis_pre,inorder,start,idx-1,preorder);
        root->right=makeTree(root->right,vis_pre,inorder,idx+1,end,preorder);
        return root;
    }
    
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre=0;
        vector<bool>vis_pre(inorder.size(),0);
        return makeTree(NULL,vis_pre,inorder,0,inorder.size()-1,preorder);
        
    }
};