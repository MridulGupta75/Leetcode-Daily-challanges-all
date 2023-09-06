/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                auto x=q.front();
                q.pop();
                if(size==0)x->next=NULL;
                else x->next=q.front();
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
                
            }
        }
        return root;
        
    }
};