class Solution {
public:
    int func(int i,int j,vector<int>& cuts,vector<vector<int>>&dp)
    {
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mini=1e8;
        for(int k=i;k<=j;k++)
        {
           int  cost=cuts[j+1]-cuts[i-1]+func(i,k-1,cuts,dp)+func(k+1,j,cuts,dp);
            mini=min(cost,mini);
        }
        return dp[i][j]=mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int sz=cuts.size();
         sort(cuts.begin(),cuts.end());
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        // vector<vector<int>>dp(sz+2,vector(sz+2,-1));
        // return func(1,cuts.size()-2,cuts,dp);
        vector<vector<int>>dp(sz+2,vector(sz+2,0));
        for(int i=cuts.size()-2;i>=1;i--)
        {
            for(int j=i;j<=cuts.size()-2;j++)
            {
                 int mini=1e8;
                for(int k=i;k<=j;k++)
                {
                   int  cost=cuts[j+1]-cuts[i-1]+dp[i][k-1]+dp[k+1][j];
                    mini=min(cost,mini);
                }
                 dp[i][j]=mini;
            }
        }
      
        return dp[1][cuts.size()-2];
        
    }
};