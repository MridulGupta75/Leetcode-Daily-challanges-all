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
    vector<int> rightSideView(TreeNode* root) {
         if(root==NULL)return {};
   queue<pair<TreeNode*,int>>q;
   map<int,int>mpp;
   q.push({root,0});
   while(!q.empty())
   {
       int size=q.size();
       for(int i=0;i<size;i++)
       {
           TreeNode*node=q.front().first;
           int ht=q.front().second;
           q.pop();
           // auto itr=mpp.find(ht);
           // if(itr==mpp.end()) 
           // mpp.insert({ht, node->data});
           mpp[ht]=node->val;
            if(node->left!=NULL)q.push({node->left,ht+1});
            if(node->right!=NULL)q.push({node->right,ht+1});
       }
   }
    vector<int>sol;
    for(auto&x:mpp)
    {
       sol.push_back(x.second);
    }
    return sol;
        
    }
};