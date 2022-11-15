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
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int count =1;
        countNoOfNodes(root,count);
        return count;
    }
     void countNoOfNodes(TreeNode* root,int&count)
     {
           if(root->left!=NULL)
           {
               count++;
               countNoOfNodes(root->left,count);
           }
          if(root->right!=NULL)
           {
               count++;
               countNoOfNodes(root->right,count);
           }
         else return;
     }
};