class Solution {
public:
//     int func(int i,vector<int>& prices,bool b,vector<vector<int>>&dp)
//     {
        
//         if(i==prices.size())
//             return 0;
//         int pro=0;
//         if(dp[i][b]!=-1)return dp[i][b];
//         if(!b)
//         {
//              pro=max(-prices[i]+func(i+1,prices,true,dp),func(i+1,prices,false,dp));
//         }
//         else
//         {
//             pro=max(prices[i]+func(i+1,prices,false,dp),func(i+1,prices,true,dp));
//         }
//         return dp[i][b]=pro;
        
//     }
    int maxProfit(vector<int>& prices) {
        // vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        // return func(0,prices,false,dp);
       int n=prices.size();
       vector<int>curr(2,0),pre(2,0);
        for(int i=n-1;i>=0;i--)
        {
           curr[0]=max(-prices[i]+pre[1],pre[0]);
             curr[1]=max(prices[i]+pre[0],pre[1]);
            pre=curr;
        }
        return pre[0];
        
        
    }
};