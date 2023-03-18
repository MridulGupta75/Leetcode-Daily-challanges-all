typedef struct trie_node{
    struct trie_node* arr[26];
    bool flag=false;
    
    bool check(char ch)
    {
        return(arr[ch-'a']!=NULL);
    }
    
    void ins(char ch,struct trie_node*node)
    {
       arr[ch-'a']=node;   
    }
    
    struct trie_node* next(char ch)
    {
       return(arr[ch-'a']) ;       
    }
    
 
    
    
  
}tn;



class Trie {
    tn*root;
public:
    
    Trie() {
        root=new tn();
        
    }
    
    void insert(string word) {
        tn*node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->check(word[i]))
            {
                node->ins(word[i],new tn());
            }
            
            node=node->next(word[i]);
        }
       node->flag=true;
        
    }
    
    bool search(string word) {
        
        tn*node=root;
      for(int i=0;i<word.length();i++)
        {
          if(!node->check(word[i]))return false;
          node=node->next(word[i]);
          
      }
        if(node->flag==true)return true;
        return false;
        
    }
    
    bool startsWith(string prefix) {
            tn*node=root;
      for(int i=0;i<prefix.length();i++)
        {
          if(!node->check(prefix[i]))return false;
          node=node->next(prefix[i]);
          
      }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */