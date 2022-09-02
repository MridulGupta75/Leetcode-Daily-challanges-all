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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL||(head->next==NULL&&head->val!=val))return head;
        else if(head->next==NULL&&head->val==val)return NULL;
        ListNode *t=head,*tn=head->next;
        up:
        while(t!=NULL)
        {
            int l=0;
            if(head->val==val)
            {   
                head=head->next;
                t=head;
                if(tn!=NULL)
                tn=t->next;
                goto up;
            }
            if(tn==NULL)break;
            else if(tn->val==val)
            {
                t->next=tn->next;
                ListNode *k=tn;
                tn=tn->next;
                delete k;
                l=1;
            }
            if(l==0)
            {
            t=tn;
            tn=tn->next;
            }
                
        }
        return head;
    }
        
     
    
};