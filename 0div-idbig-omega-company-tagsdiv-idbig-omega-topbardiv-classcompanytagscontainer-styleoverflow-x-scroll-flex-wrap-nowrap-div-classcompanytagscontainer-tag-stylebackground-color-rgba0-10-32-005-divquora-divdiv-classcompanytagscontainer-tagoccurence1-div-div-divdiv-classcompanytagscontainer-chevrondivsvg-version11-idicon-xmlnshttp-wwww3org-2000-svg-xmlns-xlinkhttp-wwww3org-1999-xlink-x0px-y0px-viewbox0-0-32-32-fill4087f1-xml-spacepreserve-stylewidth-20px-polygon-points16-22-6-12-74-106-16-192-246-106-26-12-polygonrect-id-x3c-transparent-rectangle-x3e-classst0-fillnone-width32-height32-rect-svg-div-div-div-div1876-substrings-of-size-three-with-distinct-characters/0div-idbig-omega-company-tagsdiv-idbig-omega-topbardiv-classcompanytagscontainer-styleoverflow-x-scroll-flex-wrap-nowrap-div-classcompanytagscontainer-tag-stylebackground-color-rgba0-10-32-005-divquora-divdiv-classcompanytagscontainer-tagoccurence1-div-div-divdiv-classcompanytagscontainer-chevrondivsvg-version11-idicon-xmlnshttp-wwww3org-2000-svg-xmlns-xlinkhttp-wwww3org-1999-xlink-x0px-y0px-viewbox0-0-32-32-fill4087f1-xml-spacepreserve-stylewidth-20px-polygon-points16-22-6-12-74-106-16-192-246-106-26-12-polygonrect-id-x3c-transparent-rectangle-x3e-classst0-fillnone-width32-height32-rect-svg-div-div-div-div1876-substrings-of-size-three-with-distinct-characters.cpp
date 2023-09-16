class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3)return 0;
      map<char,int>mpp;
        int i=0,j=2;
       mpp[s[0]]++;
         mpp[s[1]]++;
        int c=0;
        while(j<s.size())
        {
             mpp[s[j]]++;
            if(mpp.size()==3)c++;
            if(mpp[s[i]]==1)mpp.erase(s[i]);
            else mpp[s[i]]--;
            i++,j++;
            
        }
        return c;
        
    }
};