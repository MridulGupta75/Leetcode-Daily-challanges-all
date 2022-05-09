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
    bool hasCycle(ListNode *head) {
        ListNode*fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
           fast=fast->next->next;
            head=head->next;
            if(head==fast)
                return true;
            
        }
        return false;
        
    }
};