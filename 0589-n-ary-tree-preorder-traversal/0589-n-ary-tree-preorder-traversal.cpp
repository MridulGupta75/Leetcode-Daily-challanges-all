/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>sol;
        preod(sol,root);
        return  sol;
    }
    void preod(vector<int>&sol,Node*root)
    {
        if(root!=NULL)
        {
        sol.push_back(root->val);
        for(auto child:root->children)
        preod(sol,child);
        // preod(sol,root->right);
        }
    }
};