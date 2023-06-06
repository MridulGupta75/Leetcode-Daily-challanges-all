/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      if(head==NULL)return NULL;
        
        Node*temp=head;
        
        //step 1
        while(temp!=NULL)
        {
        Node* nd= new Node(temp->val);
        nd->next=temp->next;
        temp->next=nd;
            temp=temp->next->next;
            
        }
        
        //step 2
        
        temp=head;
        while(temp!=NULL)
        {
            if(temp->random!=NULL)
            temp->next->random=temp->random->next;
            else
                temp->next->random=NULL;
            temp=temp->next->next;
        }
        
        
        
        
        
        //step 3
        
          temp=head;
        Node*sol=temp->next;
       
        while(temp!=NULL)
        {
            Node* newnode=temp->next; 
            
         temp->next=temp->next->next;
             if(newnode->next)
            {
                newnode->next=newnode->next->next;
            }
            temp=temp->next;
           
        }
        
        
   
        return sol;
        
        
    }
};