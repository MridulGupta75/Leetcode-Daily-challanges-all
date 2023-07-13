class Solution {
public:
    int func(int i,int j,vector<int>& piles,vector<vector<int>>&dp)
    {
        if(i>j)return 0;
        if(i==j)return piles[i];
        if(dp[i][j]!=-1)return dp[i][j];
        int c1=piles[i]+min(func(i+2,j,piles,dp),func(i+1,j-1,piles,dp));
        int c2=piles[j]+min(func(i,j-2,piles,dp),func(i+1,j-1,piles,dp));
        return dp[i][j]=max(c1,c2);
    }
    bool stoneGame(vector<int>& piles) {
        int ans=0;
        for(auto&x:piles)ans+=x;
          int n=piles.size();
        vector<vector<int>>dp(n,vector(n,-1));
        int alice=func(0,n-1,piles,dp);
        int bob=ans-alice;
        
        return alice>=bob;
    }
};