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
    ListNode* partition(ListNode* head, int x) {
        if(!head)return NULL;
        ListNode*small=NULL,*large=NULL, *sp=NULL,*lp=NULL;
        while(head!=NULL)
        {
           
                ListNode*temp=new ListNode(head->val);
             if(head->val<x)
             {
                 if(small==NULL)
                     sp=small=temp;
                 else
                 {
                     sp->next=temp;
                     sp=sp->next;
                 }
             }
            else 
            {
                if(lp==NULL)
                     lp=large=temp;
                 else
                 {
                     lp->next=temp;
                     lp=lp->next;
                 }
            }
            head=head->next;
        }
        if(sp==NULL)return large;
        else sp->next=large;
      
        return small;
        
        
    }
};