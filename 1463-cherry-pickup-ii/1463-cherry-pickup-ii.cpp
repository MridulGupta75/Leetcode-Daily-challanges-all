class Solution {
    
private:
    int n,m;
    int func(int i,int j1,int j2,vector<vector<int>>& grid, vector<vector<vector<int>>>&dp)
    {
        if(i<0||i>=n||j1<0||j1>=m||j2<0||j2>=m) return -1e7;
        if(i==n-1)
        {
             if(j1==j2) return grid[i][j1];
              return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1)return dp[i][j1][j2];
        int maxi=-1e7;
        for(int ii=-1;ii<=1;ii++)
        {
            for(int jj=-1;jj<=1;jj++)
            {
                 if(j1==j2)maxi=max(grid[i][j1]+func(i+1,j1+ii,j2+jj,grid,dp),maxi);
                 else maxi=max(grid[i][j1]+grid[i][j2]+func(i+1,j1+ii,j2+jj,grid,dp),maxi);
            }
        }
        return dp[i][j1][j2]=maxi;
       
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
       vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return func(0,0,m-1,grid,dp);
    }
};