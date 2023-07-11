class Solution {
public:
    int func(int i,int j,string&s,string&t,vector<vector<int>>&dp)
    {
        if(i<0)return j+1;
        if(j<0)return i+1;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j])return dp[i][j]=func(i-1,j-1,s,t,dp);
        return dp[i][j]=min(1+func(i-1,j,s,t,dp),min(1+func(i-1,j-1,s,t,dp),1+func(i,j-1,s,t,dp)));
    }
    int minDistance(string word1, string word2) {
        int n=word1.length(),m=word2.length();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        // return func(n-1,m-1,word1,word2,dp);
        for(int j=0;j<=m;j++)dp[0][j]=j+1;
        for(int i=1;i<=n;i++)dp[i][0]=i+1;
        
        for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(word1[i-1]!=word2[j-1]) dp[i][j]=min(1+dp[i-1][j],min(1+dp[i-1][j-1],1+dp[i][j-1]));
            else dp[i][j]=dp[i-1][j-1];
        return dp[n][m]-1;
                
        
    }
};