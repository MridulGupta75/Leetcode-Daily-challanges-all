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
    int func(int i,bool t)
    {
        return t?((2*i)+1):((2*i)+2);
    }
    
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*,int>>q;
        int maxi=1;
        q.push({root,0});
        while(!q.empty())
        {
            int size=q.size();
            int mini=q.front().second;
            if(size>1)
            {
                int l=q.back().second;
                int f=q.front().second;
                maxi=max(maxi,(l-f+1));
            }
            int l,f;
           
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front().first;
                int r=q.front().second;
                  q.pop();
                if(node->left) q.push({node->left,r*1LL*2+1});
                if(node->right)q.push({node->right,r*1LL*2+2});
            }
            
        }
        return maxi;
        
    }
};