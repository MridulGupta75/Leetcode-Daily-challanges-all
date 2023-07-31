class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mpp;
        int l=0,r=0,sol=0;
        while(r<s.size())
        {
            mpp[s[r]]++;
            int maxlen=0;
            for(auto&x:mpp)maxlen=max(maxlen,x.second);
             
            int winsize=r-l+1;
            if(winsize-maxlen<=k)sol=max(sol,winsize);
            else
            {
                while(r-l+1-maxlen>k)
                {
                    mpp[s[l]]--;
                    // for(auto&x:mpp)maxlen=max(maxlen,x.second); //remove it for run time take it for understanting
                    l++;
                }
            }
            
            sol=max(sol,r-l+1);
            r++;
            
        }
        return sol;
        
    }
};