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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*pre=NULL,*cur=head,*after=head->next;
        while(after!=NULL)
        {
            cur->next=pre;
            pre=cur;
            cur=after;
            after=after->next;
        }
        cur->next=pre;
       return cur;
    }
};