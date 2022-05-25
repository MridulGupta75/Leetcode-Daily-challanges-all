/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode*pp=NULL;
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(cloned!=NULL)
        {
           if(cloned->val==target->val)
           {
               pp=cloned;
               return cloned;
           }
             getTargetCopy(original,cloned->right,target);
             getTargetCopy(original,cloned->left,target);
         }
        return pp;
        
    }
};