class Solution {
public:
    // 
    bool stoneGame(vector<int>& piles) {
        int ans=0;
        for(auto&x:piles)ans+=x;

       int alice=piles[0];
        int bob=ans-alice;
        return alice<=bob;
    }
};
         // int n=piles.size();
//         vector<vector<int>>dp(n+3,vector(n+3,0));
//         int alice=func(0,n-1,piles,dp);
//         int bob=ans-alice;
//         for(int i=0;i<n;i++)
//         dp[i][i]=piles[i];
           
        
//         for(int i=n-1;i>=2;i--)
//         {
//             for(int j=n-1;j>=2;j--)
//             {
//                 if(i>j) continue;
//                 int c1=piles[i]+min(dp[i+2][j],dp[i+1][j-1]);
//                 int c2=piles[j]+min(dp[i][j-2],dp[i+1][j-1]);
//                dp[i][j]=max(c1,c2);
//             }
//         }


// int func(int i,int j,vector<int>& piles,vector<vector<int>>&dp)
    // {
    //     if(i>j)return 0;
    //     if(i==j)return piles[i];
    //     if(dp[i][j]!=-1)return dp[i][j];
    //     int c1=piles[i]+min(func(i+2,j,piles,dp),func(i+1,j-1,piles,dp));
    //     int c2=piles[j]+min(func(i,j-2,piles,dp),func(i+1,j-1,piles,dp));
    //     return dp[i][j]=max(c1,c2);
    // }