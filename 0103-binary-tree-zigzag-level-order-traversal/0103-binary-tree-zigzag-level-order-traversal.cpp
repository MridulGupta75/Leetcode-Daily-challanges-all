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
        if(!root)return {};
        queue<TreeNode*>q;
        q.push(root);
        bool flag=false;
        vector<vector<int>>sol;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>vec;
            while(size--)
            {
                TreeNode* node=q.front();
                q.pop();
                vec.push_back(node->val);
               
                     if(node->left)q.push(node->left);
                     if(node->right)q.push(node->right);
                
            }
            if(flag)reverse(vec.begin(),vec.end());
            flag=flag==true?false:true;
            sol.push_back(vec);
        }
        return sol;
    }
};