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
        if(root==NULL)return NULL;
        TreeNode*lt=lowestCommonAncestor(root->left,p,q);
        TreeNode* rt=lowestCommonAncestor(root->right,p,q);
        if(lt!=NULL&&rt!=NULL)return root;
        if(lt==NULL&&rt==NULL&&root!=p&&root!=q)return NULL;
        if(root==p)return p;
        if(root==q)return q;
        if(lt==NULL)return rt;
        return lt;
    }
};