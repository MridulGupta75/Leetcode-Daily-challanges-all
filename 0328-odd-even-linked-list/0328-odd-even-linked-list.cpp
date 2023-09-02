/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL)return head;
        ListNode*first=head,*second=head->next;
        ListNode*t=first,*l=second;
        while((t->next!=NULL&&t->next->next!=NULL)||(l->next!=NULL&&l->next->next!=NULL))
        {
            if(t->next!=NULL&&t->next->next!=NULL)
            {
                t->next=t->next->next;
                t=t->next;
            }
            if(l->next!=NULL&&l->next->next!=NULL)
            {
                l->next=l->next->next;
                  l=l->next;
            }
        }
        t->next=second;
        l->next=NULL;
        return first;
        
    }
};