class Solution {
public:
    int func(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        
        if(i<0||j<0)return 0;
        if(grid[i][j]==1)return 0;
        if(i==0&&j==0)return 1;
        if(dp[i][j]!=-1)return dp[i][j];
        return (dp[i][j]=(func(i-1,j,m,n,grid,dp)+func(i,j-1,m,n,grid,dp)));
       
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
     //    vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
     // return func(grid.size()-1,grid[0].size()-1,grid.size(),grid[0].size(),grid,dp);   
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
      
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                 if(grid[i][j]==1)
                 {
                    dp[i][j]=0;
                     continue;
                 }
                else
                {
                    int up=0,dw=0;
                    if(i>0)up=dp[i-1][j];
                    if(j>0)dw=dp[i][j-1];
                    dp[i][j]=up+dw;
                  
                }
                if(i==0&&j==0)
                dp[i][j]=1;
               
            }
        }
        
      
        return dp[m-1][n-1];
       
    }
};