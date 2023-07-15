class Solution {
public:
    int func(int i,int j,vector<vector<int>>& grid, vector<vector<int>>&dp)
    {
        if(i==0&&j==0)return grid[0][0];
       if(dp[i][j]!=-1)return dp[i][j];
      int l=INT_MAX,u=INT_MAX;
        if(j>0)
         l=grid[i][j]+func(i,j-1,grid,dp);
        if(i>0)
        u=grid[i][j]+func(i-1,j,grid,dp);
        return dp[i][j]=min(l,u);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector(m,-1));
        return func(n-1,m-1,grid,dp);
    }
};