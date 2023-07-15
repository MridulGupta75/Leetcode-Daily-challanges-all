class Solution {
public:
    int func(int i,int j,vector<vector<int>>& tri,int n,vector<vector<int>>&dp)
    {
        if(i==n-1)return tri[i][j];
        // if(i>=n||j>=n)return 10e5;
        int l,u=10e5;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i<n)
         l=tri[i][j]+func(i+1,j,tri,n,dp);
        if(j<n)
        u=tri[i][j]+func(i+1,j+1,tri,n,dp);
        return dp[i][j]=min(l,u);

    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector(n,-1));
        return func(0,0,triangle,n,dp);
        // vector<vector<int>>dp(n,vector(n,0));
        
        
        
    }
};