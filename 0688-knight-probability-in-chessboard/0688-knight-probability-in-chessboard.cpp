class Solution {
public:
    double func(int i,int j,int n,int k, vector<vector<vector<double>>>&dp)
    {
        if(i>=n||j>=n||i<0||j<0)return 0;
        if(k==0)return 1;
        if(dp[i][j][k]!=-1)return dp[i][j][k];
        double sum=func(i+1,j-2,n,k-1,dp)+func(i+1,j+2,n,k-1,dp)+func(i-1,j-2,n,k-1,dp)+func(i-1,j+2,n,k-1,dp)+func(i+2,j-1,n,k-1,dp)+func(i+2,j+1,n,k-1,dp)+func(i-2,j-1,n,k-1,dp)+func(i-2,j+1,n,k-1,dp);
        
        return dp[i][j][k]=(double)sum/8;
    }
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>>dp(n,vector(n,vector<double>(k+1,-1)));
        return func(row,column,n,k,dp);
    }
};