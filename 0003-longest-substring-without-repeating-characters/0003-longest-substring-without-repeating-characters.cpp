class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char ,int>mpp;
        int l=0,r=0,len=0;
        while(r<s.length())
        {
            auto itr=mpp.find(s[r]);
            if(itr!=mpp.end())
            {
               
            
                l=max((itr->second)+1,l);
                 
                (itr->second)=r;
                
                 len=max(len,r-l+1);
                
            }
            else
            {
                mpp.insert({s[r],r});
                len=max(len,r-l+1);
                
                
            }
            r++;
           
            
        }
        return len;
    }
};