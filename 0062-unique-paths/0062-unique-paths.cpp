class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>sol(m,vector<int>(n,-1));
        int i=0,j=0;
        return (count(i,j,m,n,sol));
    }
    int count(int i,int j,int m,int n,vector<vector<int>>&dp)
    {
         if(n<=j||m<=i) return 0;
        if(i==(m-1)&&j==(n-1))dp[i][j]=1;
       
        if(dp[i][j]!=-1)return dp[i][j];
        return(dp[i][j]=count(i+1,j,m,n,dp)+count(i,j+1,m,n,dp));
    }
};