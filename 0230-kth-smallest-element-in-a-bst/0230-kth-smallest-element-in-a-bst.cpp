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
    void func(TreeNode* root, vector<int>&vec)
    {
        if(!root)return;
        func(root->left,vec);
        vec.push_back(root->val);
         func(root->right,vec); 
    }
public:
    int kthSmallest(TreeNode* root, int k) {
      vector<int>sol;
        func(root,sol);
        return sol[k-1];
        
    }
};