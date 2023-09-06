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
        // Iterative
         if(!root)return {};
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        map<int,int>mpp;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                auto x=q.front();
                q.pop();
                mpp[x.second]=x.first->val;
                if(x.first->left)q.push({x.first->left,x.second+1});
                if(x.first->right)q.push({x.first->right,x.second+1});
                
            }
        }
         vector<int>sol;
        for(auto&x:mpp)
        {
            sol.push_back(x.second);
        }
        return sol;
        
        
        // //recursive
        // vector<int>sol;
        // func(root,sol,0);
        // return sol;
        
        
        
    }
};