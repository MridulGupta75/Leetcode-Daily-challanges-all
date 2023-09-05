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
        set<ListNode*>mpp;
        while(headA!=NULL)
        {
            mpp.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(mpp.find(headB)==mpp.end())headB=headB->next;
            else return headB;
        }
        return NULL;
    }
};