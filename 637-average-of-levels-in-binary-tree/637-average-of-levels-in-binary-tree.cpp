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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>sol;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            double x=0.0;
            int i=q.size();
            int j=i;
            while(i>0)
            {
                 TreeNode* l=q.front();
                 q.pop();
               
                 if(l->left) q.push(l->left);
                if(l->right) q.push(l->right);
                     x+=l->val;
                
                 
                
                i--;
            }
            x=x/(j*1.0);
            sol.push_back(x);
            
            
        }
        return sol;
    }
};