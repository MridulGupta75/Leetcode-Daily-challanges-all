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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        
        queue<TreeNode*>q;
         vector<vector<int>>sol;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            vector<int>subsol;
            int n=q.size();
           
            for(int i=0;i<n;i++)
            {
                 TreeNode*temp=q.front();
                subsol.push_back(temp->val);
                  q.pop();
               
                      if(temp->left!=NULL)q.push(temp->left);
                      if(temp->right!=NULL)q.push(temp->right);
                 
            
            }
             if(c==0) c=1;
            else
            {
                reverse(subsol.begin(),subsol.end());
                c=0;
            }
             sol.push_back(subsol);
        }
        return sol;
        
    }
};