/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    unordered_map<TreeNode*,TreeNode*>parent;
    void getParents(TreeNode*root)
    {
        parent[root]=NULL;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                    parent[node->left]=node;
                }
                 if(node->right)
                {
                    q.push(node->right);
                    parent[node->right]=node;
                }
                
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        getParents(root);
        set<TreeNode*>visited;
          queue<TreeNode*>q;
        q.push(target);
        visited.insert(target);
          while(k--)
          {
              int size=q.size();
              
              for(int i=0;i<size;i++)
              {
                  TreeNode*node=q.front();
                  q.pop(); 
                  if(node->left&&visited.find(node->left)==visited.end())
                      q.push(node->left),visited.insert(node->left);
                   if(node->right&&visited.find(node->right)==visited.end())
                      q.push(node->right),visited.insert(node->right);
                  TreeNode*temp=parent[node];
                  if(temp&&visited.find(temp)==visited.end())
                       q.push(temp),visited.insert(temp);
                  
              }
          }
        vector<int>sol;
        while(!q.empty())
        {
            sol.push_back(q.front()->val);
            q.pop();
        }
        return sol;
       
       
    }
};