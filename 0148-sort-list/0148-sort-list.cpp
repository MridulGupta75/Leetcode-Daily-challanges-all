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
    ListNode*MID(ListNode*head)
    {
         ListNode* slow=head;
        ListNode* fast = head->next;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*mergeList(ListNode*lt,ListNode*rt)
    {
        if(!lt&&!rt)return lt;
        if(!lt)return rt;
        if(!rt)return lt;
        ListNode*begin=new ListNode(0);
        ListNode*ans=begin;
        while(lt!=NULL&&rt!=NULL)
        {
        if(lt->val<rt->val)
        {
            begin->next=lt;
            lt=lt->next;
        }
        else 
        {
            begin->next=rt;
            rt=rt->next;
        }
            begin=begin->next;
        }
        if(lt!=NULL)
        begin->next=lt;
        if(rt!=NULL) begin->next=rt;
        return ans->next;
        
    }
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*mid=MID(head);
        ListNode*newNode=mid->next;
        mid->next=NULL;
        ListNode*left=sortList(head);
        ListNode*right=sortList(newNode);
        return  mergeList(left,right);
    }
};