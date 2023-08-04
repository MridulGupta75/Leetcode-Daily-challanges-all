class Solution {
public:
    set<string>st;
    bool func(int ind,string&s,vector<int>&dp)
    {
        if(ind>s.size())return  false;
    
        

        if(st.find(s.substr(ind))!=st.end())return true;
        if(dp[ind]!=-1)return dp[ind];
        
        for(int i=1;i<s.size();i++)
        {
            cout<<s.substr(ind,i)<<" ";
            if(st.find(s.substr(ind,i))!=st.end()&&func(i+ind,s,dp))
            {
              return dp[ind]=true;
            }
        }
        return dp[ind]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size(),-1);
        for(auto&x:wordDict)st.insert(x);
        return func(0,s,dp);
    }
};