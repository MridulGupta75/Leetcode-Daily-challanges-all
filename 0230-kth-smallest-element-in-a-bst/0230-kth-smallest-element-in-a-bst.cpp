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
    int ans;
    void func(TreeNode* root,int &c,int &k)
    {
        if(!root)return;
        func(root->left,c,k);
        c++;
        if(c==k)ans=root->val;
         func(root->right,c,k); 
    }
public:
    int kthSmallest(TreeNode* root, int k) {
      // vector<int>sol;
        int c=0;
        func(root,c,k);
        return ans;
        
    }
};