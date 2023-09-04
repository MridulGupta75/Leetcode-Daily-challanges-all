class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
             unordered_map<char,int>mpp;
            for(int j=i;j<s.size();j++)
            {
               mpp[s[j]]++;
                int maxi=0,mini=501;
                for(auto&x:mpp)
                {
                    maxi=max(maxi,x.second);
                    mini=min(mini,x.second);
                }
                sum+=maxi-mini;
            }
        }
        return  sum;
    }
};