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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL&&headB==NULL)return NULL;
        ListNode*l=headA;
        ListNode*l1=headB;
        while(l!=NULL&&l1!=NULL&&l!=l1)
        {
            l=l->next;
            l1=l1->next;
            if(l==l1)return l;
            if(l==NULL)l=headB;
            if(l1==NULL)l1=headA;
            
        }
        return l1;
    }
};