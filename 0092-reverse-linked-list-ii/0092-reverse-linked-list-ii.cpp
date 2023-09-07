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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head||!head->next||left==right)return head;
       int c=1;
        ListNode*t=head;
          ListNode*point_to_lastRev=NULL,*pre=NULL,*point_to_first_rev=t,*n=t->next;
        if(c!=left)
        {
        while(c<left-1)
        {
            c++;
            t=t->next;
        }
        pre=NULL;
        point_to_lastRev=t;
        t=t->next;
        point_to_first_rev=t;
        n=t->next;
        c++;
        }
        while(c<=right)
        {
            t->next=pre;
            pre=t;
            t=n;
             if(n)n=n->next;
            c++;
        }
       if(point_to_lastRev) point_to_lastRev->next=pre;//no khel
       if(t)point_to_first_rev->next=t;
      return left==1?pre:head;
        
    }
};