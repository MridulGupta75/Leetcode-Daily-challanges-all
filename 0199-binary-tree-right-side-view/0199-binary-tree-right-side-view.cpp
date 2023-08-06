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
    void func(TreeNode* root,vector<int>&sol,int level)
    {
        if(root==NULL)return;
        if(level==sol.size())sol.push_back(root->val);
        func(root->right,sol,level+1);
         func(root->left,sol,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        //Iterative
   //       if(root==NULL)return {};
   // queue<pair<TreeNode*,int>>q;
   // map<int,int>mpp;
   // q.push({root,0});
   // while(!q.empty())
   // {
   //     int size=q.size();
   //     for(int i=0;i<size;i++)
   //     {
   //         TreeNode*node=q.front().first;
   //         int ht=q.front().second;
   //         q.pop();
   //         mpp[ht]=node->val;
   //          if(node->left!=NULL)q.push({node->left,ht+1});
   //          if(node->right!=NULL)q.push({node->right,ht+1});
   //     }
   // }
   //  vector<int>sol;
   //  for(auto&x:mpp)
   //  {
   //     sol.push_back(x.second);
   //  }
   //  return sol;
        
        
        //recursive
        vector<int>sol;
        func(root,sol,0);
        return sol;
        
        
        
    }
};