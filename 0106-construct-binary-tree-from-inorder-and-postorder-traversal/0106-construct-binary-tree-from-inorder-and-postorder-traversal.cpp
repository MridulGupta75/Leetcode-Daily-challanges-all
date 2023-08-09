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
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
//         int i=postorder.size()-1;
//         return(tree(inorder,postorder,i,0,inorder.size()-1));
        
//     }
    
//      TreeNode* tree(vector<int>& inorder, vector<int>& postorder,int&i,int l,int r)
//      {
//          if(l>r)return NULL;
//          int x=r;
//          while(postorder[i]!=inorder[x]) x--;
//          i--;
//          TreeNode* root=new TreeNode(inorder[x]);
//          root->right=tree(inorder,postorder,i,x+1,r);
//          root->left=tree(inorder,postorder,i,l,x-1);
//          return root;
//      }
    
// };

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
        if(pre_idx<0)return NULL;
        int idx=findIndex(preorder[pre_idx],inorder,start,end);
        if(idx==-1)return NULL;
        root=new TreeNode(preorder[pre_idx]),pre_idx--;
        root->right=makeTree(root->right,pre_idx,inorder,idx+1,end,preorder);
        root->left=makeTree(root->left,pre_idx,inorder,start,idx-1,preorder);
        return root;
    }
    
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int pre=postorder.size()-1;
        return makeTree(NULL,pre,inorder,0,inorder.size()-1,postorder);
        
    }
};