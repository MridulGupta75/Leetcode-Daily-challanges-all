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
     void getVal(ListNode*head,int*c,int*sum)
    {
        if(head==NULL)return;
        getVal(head->next,&(*c),&(*sum));
        
        int k=pow(2,(*c));
       
        *sum=*sum+(k*(head->val));
         printf("%d",head->val);
        *c=*c+1;
        // return sum;
    }
    
    int getDecimalValue(ListNode* head) {
         int c=0,sum=0;
         getVal(head,&c,&sum);
        // printf("%d",y);
        return sum;
    }
};