class Solution {
private:
int findWays(int i,int j,int m,int n,vector<vector<int>>& Mat,vector<vector<int>>&dp)  
{
    if(i>=m||j>=n)return 0;
    if(i==m-1&&j==n-1)return 1;
    if(Mat[i][j]==1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=findWays(i,j+1,m,n,Mat,dp)+findWays(i+1,j,m,n,Mat,dp);
}
public:
    int uniquePathsWithObstacles(vector<vector<int>>& Mat) {
        int m=Mat.size(),n=Mat[0].size();
        if(Mat[m-1][n-1]==1)return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return findWays(0,0,Mat.size(),Mat[0].size(),Mat,dp);
        
    }
};