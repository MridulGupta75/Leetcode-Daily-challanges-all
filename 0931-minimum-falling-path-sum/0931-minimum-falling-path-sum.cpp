class Solution {
public:
    int func(int i,int j,int n,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        if(i>=n||j<0||j>=n)return 10000;
        if(i==n-1)return grid[i][j];
        if(dp[i][j]!=-10001)return dp[i][j];
        int left=func(i+1,j-1,n,grid,dp)+grid[i][j];
        int right=func(i+1,j,n,grid,dp)+grid[i][j];
        int diagonal=func(i+1,j+1,n,grid,dp)+grid[i][j];
        return (dp[i][j]=min(left,min(right,diagonal)));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int mini=INT_MAX;
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size(),-10001));
        for(int j=0;j<matrix.size();j++)
        mini=min(mini,func(0,j,matrix.size(),matrix,dp));
         // mini=min(mini,func(0,1,matrix.size(),matrix));
        return mini;
    }
};