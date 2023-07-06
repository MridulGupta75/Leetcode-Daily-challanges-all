class Solution {
public:
    int func(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        
        if(i>m-1||j>n-1)return 0;
        if(grid[i][j]==1)return 0;
        if(i==m-1&&j==n-1)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return (dp[i][j]=(func(i+1,j,m,n,grid,dp)+func(i,j+1,m,n,grid,dp)));
       
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
     return func(0,0,grid.size(),grid[0].size(),grid,dp);   
    }
};