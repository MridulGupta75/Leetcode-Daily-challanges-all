class Solution {
    private:
    int func(int index,bool sell,vector<int>& prices,  vector<vector<int>>&dp)
    {
        if(index>=prices.size())return 0;
        if(dp[index][sell]!=-1)return dp[index][sell];
        int pro=0;
        if(!sell)
        {
              pro=-prices[index]+func(index+1,true,prices,dp);
              pro= max(func(index+1,sell,prices,dp),pro);
        }
        else
        {
             pro=prices[index]+func(index+2,false,prices,dp);
             pro=max(func(index+1,sell,prices,dp),pro);
        }
        return dp[index][sell]=pro;
    }
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return func(0,false,prices,dp);
    }
};