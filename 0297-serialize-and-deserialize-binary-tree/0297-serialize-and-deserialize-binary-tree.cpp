/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)return "";
        queue<TreeNode*>q;
        string str="";
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                if(node!=NULL)
                {
                str+=to_string(node->val)+',';
                if(node->left) q.push(node->left);
                else q.push(NULL);
                if(node->right) q.push(node->right);
                else q.push(NULL);
                }
                else 
                {
                    str+="n,";
                }
            }
        }
        // cout<<str;
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="")return NULL;
        queue<TreeNode*>q;
        stringstream s(data);
        string str="";
        getline(s,str,',');
        TreeNode*root=new TreeNode(stoi(str));
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                getline(s,str,',');
                if(str!="n") node->left=new TreeNode(stoi(str)),q.push(node->left);
                getline(s,str,',');
                 if(str!="n") node->right=new TreeNode(stoi(str)),q.push(node->right);
                    
            }
        }
        return root;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));