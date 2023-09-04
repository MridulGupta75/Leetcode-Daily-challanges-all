class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size(),st=0,end=0,maxi=1;
        if(n==1)return s;
        //odd length
        for(int i=0;i<n-1;i++)
        {
            int l=i,r=i;
            while(l>=0&&r<n)
            {
                if(s[l]==s[r]) l--,r++;
                else break;
            }
            if(r-l-1>maxi)
            {
                maxi=r-l-1;
                st=l+1,end=r-1;
            }
        }
        //even
         for(int i=0;i<n-1;i++)
        {
            int l=i,r=i+1;
            while(l>=0&&r<n)
            {
                if(s[l]==s[r]) l--,r++;
                else break;
            }
            if(r-l-1>maxi)
            {
                maxi=r-l-1;
                st=l+1,end=r-1;
            }
        }
        return s.substr(st,maxi);
        
        
    }
};