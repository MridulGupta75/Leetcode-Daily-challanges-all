/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*ok=NULL;
        while(node->next!=NULL)
        {
            if(node->next->next==NULL)
                ok=node;
         node->val=node->next->val;
            node=node->next;
        }
        ok->next=NULL;
        delete node;
        
        
    }
};