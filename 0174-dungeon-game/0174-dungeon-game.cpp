class Solution {
public:
    int func(int i,int j,vector<vector<int>>& d,int n,int m,vector<vector<int>>&dp)
    {
          if(i>=n||j>=m)return  10e5;
           if(i==n-1&&j==m-1) return d[i][j]>0?1:1-d[i][j];
         
       if(dp[i][j]!=-1)return dp[i][j];
             int r=func(i,j+1,d,n,m,dp);
       
            int dow=func(i+1,j,d,n,m,dp);
            int res=min(r,dow)-d[i][j];
        return dp[i][j]=res<=0?1:res;
        
    }
    int calculateMinimumHP(vector<vector<int>>& d) {
        int n=d.size(),m=d[0].size();
        vector<vector<int>>dp(n,vector(m,-1));
        return func(0,0,d,n,m,dp);
    }
};