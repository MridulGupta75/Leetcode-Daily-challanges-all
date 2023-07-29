class LRUCache {
public:
    typedef struct node{
     struct node*next;
     int val;
      int key;
     struct node*back;
    }nt;
    
    unordered_map<int,nt*>mpp;
        
    int cap;
    nt*head=NULL,*tail=NULL;
    
    
    LRUCache(int capacity) {
        cap=capacity;
       head=new nt();
       tail=new nt();
        head->val=-1;
        tail->val=-1;
         head->key=-1;
        tail->key=-1;
        head->next=tail;
        tail->back=head;
        tail->next=NULL;
        head->back=NULL;
        
    }
    
    int get(int key) {
        auto it=mpp.find(key);
        if(it==mpp.end())return -1;
        nt*temp=it->second;
        int val=temp->val;
        int k=temp->key;
        temp->next->back=temp->back;
        temp->back->next=temp->next;
        delete(temp);
        nt*t=new nt();
        t->val=val;
        t->key=k;
        nt*hh=head->next;
        head->next=t;
        t->next=hh;
        hh->back=t;
        t->back=head;
        mpp[key]=t;
        
        return val;
    }
    
    void put(int key, int value) {
        
        
        auto it=mpp.find(key);
        if(it!=mpp.end())
        {
             nt*temp=it->second;
            int k=temp->key;
              temp->next->back=temp->back;
             temp->back->next=temp->next;
              delete(temp);
              mpp.erase(k);
        }
        else if(mpp.size()==cap)
        {
            nt*temp=tail->back;
            int k=temp->key;
              temp->next->back=temp->back;
             temp->back->next=temp->next;
              delete(temp);
              mpp.erase(k);
             
        }
        
            nt*t=new nt();
            t->val=value;
            t->key=key;
            nt*hh=head->next;
            head->next=t;
            t->next=hh;
            hh->back=t;
            t->back=head;
            mpp[key]=t;
            
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */