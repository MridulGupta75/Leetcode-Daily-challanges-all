class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return -1;
   int windowSize=needle.length();
        string str="";
            int k=0;
           while(str.size()<needle.size())
            {
             str+=haystack[k]; 
                k++;
            }
     // cout<<k;
        if(str==needle)return (k-needle.size());
        for(int i=k;i<haystack.size();i++)
        {
         
            str.erase(0,1);
            str+=haystack[i];
            cout<<str<<endl;
           if(str==needle)return (i+1-needle.size());
         
        }
        // cout<<str<<k;
        return -1;
               
        
        
    }
};