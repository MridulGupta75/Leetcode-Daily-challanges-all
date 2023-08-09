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
    //sara node ka parent save karna ka lia map ma ya func  h
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
        set<TreeNode*>visited;/* set jo search karaga ki available h ya ni set m wo node jiska base pa pata chalaga ki visited h ya                                                            ni  wo*/
          queue<TreeNode*>q;//bsf ka lia queue
        q.push(target);
        visited.insert(target);//initially dono queue and set m dalsia
          while(k--)//distatance 0 hota he break
          {
              int size=q.size();//har iteration ka lia size queue ka
              
              for(int i=0;i<size;i++)
              {
                  TreeNode*node=q.front();
                  q.pop(); 
                  if(node->left&&visited.find(node->left)==visited.end())//check left NULL tw ni fir vistited tw ni fir insert
                      q.push(node->left),visited.insert(node->left);
                   if(node->right&&visited.find(node->right)==visited.end())//same as left
                      q.push(node->right),visited.insert(node->right);
                  TreeNode*temp=parent[node];
                  if(temp&&visited.find(temp)==visited.end())//check baap NULL tw ni fir uska baap visited tw ni fir insert
                       q.push(temp),visited.insert(temp);
                  
              }
          }
        vector<int>sol;  // baki queue ko nikal ka print kardo simple jo lat m a h
        while(!q.empty())
        {
            sol.push_back(q.front()->val);
            q.pop();
        }
        return sol;
       
       
    }
};