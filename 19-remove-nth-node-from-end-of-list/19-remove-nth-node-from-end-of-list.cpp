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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*r=head;
        while(r)
        {
            r=r->next;
            count++;
        } 
        if(count<n)return head;
        count-=n;
        r=head;
        ListNode*temp=NULL;
        while(count--)
        {
            if(count ==0)
                temp=r;
            r=r->next;
        }
        if(r->next!=NULL&&r!=head)
        {
            temp->next=r->next;
        }
        else if(r->next==NULL&&temp!=NULL)temp->next=NULL;
        else head=head->next;
        delete r;
        return head;
    }
};