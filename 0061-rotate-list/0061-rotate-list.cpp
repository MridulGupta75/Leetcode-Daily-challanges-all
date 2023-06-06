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
    ListNode* rotateRight(ListNode* head, int k) {
        
       if(head==NULL||head->next==NULL) return head;
        
        //last nikalo
        int size=1;
       ListNode*last=head;
        while(last->next!=NULL)
        {
            last=last->next;
            size++;
        }
        last->next=head;
        k=k%size;
        int m=size-k-1;
        
        
       ListNode*temp=head; 
        cout<<m;
        
      while(m--)
      {
           temp=temp->next;
          
      }
        cout<<temp->val;
       head=temp->next;
        temp->next=NULL;
       
    
        return head;
        
    }
};