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
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(!root)return root;
//         if(root==p||root==q) return root==p?p:q;
//         TreeNode*lt= lowestCommonAncestor(root->left,p,q);
//         TreeNode*rt= lowestCommonAncestor(root->right,p,q);
//         if(lt&&rt)return root;
//         if(!lt&&!rt)return NULL;
//         return !lt?rt:lt;
        
        
        if(!root)return root;
        if(root==p||root==q) return root==p?p:q;
        if((p->val<root->val&&q->val>root->val)||(p->val>root->val&&q->val<root->val))return root;
        if(p->val<root->val)
        return lowestCommonAncestor(root->left,p,q);
        return lowestCommonAncestor(root->right,p,q);
    }
};