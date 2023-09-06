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
        int c=0;
        while(head!=NULL)
        {
            c++;
            head=head->next;
        }
        return c;
    }
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int c=MID(head);
        int number=c/k;
        int rem=c%k;
        ListNode*temp=head;
        vector<ListNode*>sol;
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
                sol.push_back(temp);
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
                    sol.push_back(temp);
                   temp=t;
           }
           while(v--)
               sol.push_back(NULL);
           
       }
        return sol;
    }
};