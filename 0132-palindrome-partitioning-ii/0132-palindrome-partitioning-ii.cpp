class Solution {
public:
    bool palin(int i,int j,string&s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])return false;
            i++,j--;
        }
        return true;
    }
    int func(int i,int n,string&s, vector<vector<int>>&dp)
    {
        if(i==n)return 0;
        if(dp[i][n]!=-1)return dp[i][n];
        int mini=INT_MAX;
        for(int k=i;k<n;k++)
        {
            
            if(palin(i,k,s))
            {
                int cost=1+func(k+1,n,s,dp);
                mini=min(cost,mini);
            }
        }
        return dp[i][n]=mini;
    }
    int minCut(string s) {
        int n=s.length();
        vector<vector<int>>dp(n+1,vector(n+1,-1));
        return func(0,n,s,dp)-1;
    }
};