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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int i=postorder.size()-1;
        return(tree(inorder,postorder,i,0,inorder.size()-1));
        
    }
    
     TreeNode* tree(vector<int>& inorder, vector<int>& postorder,int&i,int l,int r)
     {
         if(l>r)return NULL;
         int x=r;
         while(postorder[i]!=inorder[x]) x--;
         i--;
         TreeNode* root=new TreeNode(inorder[x]);
         root->right=tree(inorder,postorder,i,x+1,r);
         root->left=tree(inorder,postorder,i,l,x-1);
         return root;
     }
    
};