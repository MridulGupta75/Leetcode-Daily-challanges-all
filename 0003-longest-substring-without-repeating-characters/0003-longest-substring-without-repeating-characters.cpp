class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int i=0,j=0,l=0;
        while(j<s.length())
        {
            auto itr=mpp.find(s[j]);
            if(itr!=mpp.end())
            {
                int k=i;
                i=itr->second+1;
                for(;k<i;k++) mpp.erase(s[k]);
                mpp[s[j]]=j;
            }
            else
            mpp[s[j]]=j;
            l=max(l,j-i+1);
            j++;
        }
        return l;
    }
};