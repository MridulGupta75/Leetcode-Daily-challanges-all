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
    private:
    int MID(ListNode* head)
    {
        if(!head)return 0;
        int c=1;
        ListNode*fast=head;
        while(fast&&fast->next&&fast->next->next)
        {
            c++;
            head=head->next;
            fast=fast->next->next;
        }
        if(fast->next)return c*2;
        return c*2-1;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int c=MID(head);
        int number=c/k;
        int rem=c%k;
        ListNode*temp=head;
        vector<ListNode*>sol(k,NULL);
        int i=0;
        if(number)
        {
            while(temp)
            {
                int m=number-1;
                 ListNode*k=temp;
                while(m--)
                k=k->next;
                if(rem)
                {
                    rem--;
                    k=k->next;
                }
                 ListNode*t=k->next;
                k->next=NULL;
                sol[i++]=temp;
                temp=t;
            }
        }
       else
       {
           int v=k-rem;
           while(rem--)
           {
                   ListNode*t=temp->next;
                   temp->next=NULL;
                    sol[i++]=temp;
                   temp=t;
           }
           // while(v--)
           //     sol.push_back(NULL);
           
       }
        return sol;
    }
};