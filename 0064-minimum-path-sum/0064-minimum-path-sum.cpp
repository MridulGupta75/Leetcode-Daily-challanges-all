class Solution {
public:
    int func(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        if(i<0||j<0)return 300;
        if(i==0&&j==0)return grid[0][0];
        if(dp[i][j]!=-1)return dp[i][j];
        int top=func(i-1,j,m,n,grid,dp)+grid[i][j];
        int down=func(i,j-1,m,n,grid,dp)+grid[i][j];
        return(dp[i][j]=min(top,down));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return(func(m-1,n-1,m,n,grid,dp));
    }
};