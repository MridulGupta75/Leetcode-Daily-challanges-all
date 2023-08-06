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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root==NULL)return {};
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mpp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front().first;
                int x=q.front().second.first;
                int y=q.front().second.second;
                int k=node->val;
                q.pop();
               mpp[x][y].insert(k);
                if(node->left!=NULL)
                {
                    q.push({node->left,{x-1,y+1}});
                }
                 if(node->right!=NULL)
                {
                    q.push({node->right,{x+1,y+1}});
                }
                
            }
        }
        vector<vector<int>>sol;
        for(auto&x:mpp)
        {
            vector<int>subsol;
          for(auto&y:x.second)
          {
              subsol.insert(subsol.end(),y.second.begin(),y.second.end());
          }
            sol.push_back(subsol);

            
               // cout<<x.first<<" "<<endl;
        }

        return sol;
        
    }
};