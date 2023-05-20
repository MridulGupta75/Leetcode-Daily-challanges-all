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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode*sol=NULL;
        ListNode*temp=NULL;
        int c=0;
        while(l1!=NULL||l2!=NULL||c)
        {
            int sum=c;
           if(l1!=NULL)
            sum+=l1->val;
           if(l2!=NULL)
            sum+=l2->val;
            ListNode*t=new ListNode();
             if(sol==NULL)sol=t;
            if(sum>9)
            {
                t->val=sum%10;
                c=sum/10;
            }
            else
            {
                t->val=sum;
               c=0;
            }
             if(sol==t)
                {
                    temp=t;
                }
                else
                {
                    temp->next=t;
                    temp=t;
                }
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        
        return sol;
        
    }
};