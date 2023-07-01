class Solution {
public:
    int uniquePaths(int m, int n) {
        int i=0,j=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(i,j,m,n,dp);
        
    }
    int fun(int i,int j,int m,int n,vector<vector<int>>&dp)
    {
        if(i>m-1||j>n-1) return 0;
        if(i==m-1&&j==n-1) return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        else
        return (dp[i][j]= fun(i+1,j,m,n,dp)+fun(i,j+1,m,n,dp));
        
    }
};