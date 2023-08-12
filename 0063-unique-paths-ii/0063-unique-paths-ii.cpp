class Solution {
public:
    int func(int m,int n,vector<vector<int>>&Mat, vector<vector<int>>&dp)
    {
        if(m<0||n<0)return 0;
        if(m==0&&n==0)return 1;
        if(Mat[m][n]==1)return 0;
        if(dp[m][n]!=-1)return dp[m][n];
        return dp[m][n]=func(m-1,n,Mat,dp)+func(m,n-1,Mat,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& Mat) {
        int m=Mat.size(),n=Mat[0].size();
        if(Mat[0][0]==1)return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(m-1,n-1,Mat,dp);
        
    }
};