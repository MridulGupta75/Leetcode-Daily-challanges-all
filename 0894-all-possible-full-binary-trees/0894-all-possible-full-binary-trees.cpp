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
     vector<TreeNode*> func(int n)
     {
         if(n%2==0) return {};
         vector<TreeNode*>dp;
         if(n==1) return {new TreeNode()};
         for(int i=1;i<n;i++)
         {
             vector<TreeNode*>l=func(i);
             vector<TreeNode*>r=func(n-i-1);
             for(auto&x:l)
                for(auto&y:r)
                 dp.push_back(new TreeNode(0, x, y));
         }
         return dp;
     }
    vector<TreeNode*> allPossibleFBT(int n) {
        return func(n);
    }
};