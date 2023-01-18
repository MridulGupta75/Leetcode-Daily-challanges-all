//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node*zero=NULL,*one=NULL,*two=NULL;
        Node*headfinal=NULL,*headone=NULL,*headtwo=NULL;
    
       while(head!=NULL)
       {
           if(head->data==0){
               if(zero==NULL)
               {
                   zero=head;
                   headfinal=zero;
                   
               }
               else{
                   zero->next=head;
                   zero=head;
               }
               head=head->next;
           }
           else if(head->data==1)
           {
                if(one==NULL)
               {
                   one=head;
                    headone=one;
                  
                   
               }
               else{
                   one->next=head;
                   one=head;
               }
               head=head->next;
           }
           else{
                if(two==NULL)
               {
                   two=head;
                    headtwo=two;
                  
                   
               }
               else{
                   two->next=head;
                   two=head;
               }
               head=head->next;
               
           }
       }
 
    
    if(zero==NULL)headfinal=headone;
    else zero->next=headone;
     if(one==NULL){
        if(zero==NULL)headfinal=headtwo;
        else zero->next=headtwo;
    }
    else one->next=headtwo;
    if(two!=NULL)two->next=NULL;
    return headfinal;
    
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends