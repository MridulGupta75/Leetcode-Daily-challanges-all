class Solution {
public:
       int func(int i,int j,int m,int n,vector<vector<int>>&dp)
       {
           
           
           if(i>=m||j>=n)return 0;
          
           if(i==m-1&&j==n-1)
           {
               
               dp[i][j]=1;
           }
            if(dp[i][j]!=-1)return dp[i][j];
           dp[i][j]=func(i+1,j,m,n,dp)+func(i,j+1,m,n,dp);
           return dp[i][j];
       }
    
    int uniquePaths(int m, int n) {
         vector<vector<int>>dp(m,vector<int>(n,-1));
            return(func(0,0,m,n,dp));
        
    }
};