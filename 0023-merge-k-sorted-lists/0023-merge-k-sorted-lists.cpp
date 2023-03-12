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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*head=NULL;
        for(auto it:lists)
           insert(head,it);
        return head;
        
    }
    void insert(ListNode*&head,ListNode*it)
    {
        if(it==NULL)return;
        if(head==NULL)head=it;
        else
        {
            while(it!=NULL)
            {
                ListNode*p=new ListNode(it->val);
                if(head->val>=it->val)
                {
                    
                    p->next=head;
                    head=p;
                }
                else
                {
                    ListNode*pre=head,*temp=head->next;
                    while(temp!=NULL)
                    {
                        if(temp->val>=it->val)
                        {
                            pre->next=p;
                            p->next=temp;
                            break;
                        }
                        temp=temp->next;
                        pre=pre->next;
                    }
                    if(temp==NULL)
                        pre->next=p;
                }
                ListNode*kk=it;
                it=it->next;
                delete kk;
            }
        }
        
    }
};