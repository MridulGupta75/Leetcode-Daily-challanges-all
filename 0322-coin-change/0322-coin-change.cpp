class Solution {
public:
    int func(int ind,int tar,vector<int>& nums,vector<vector<int>>&dp)
    {
        if(tar==0)return 0;
        if(ind==0)
        {
            if(tar%nums[ind]==0)
                return tar/nums[ind];
            return 1e9;
        }
        if(dp[ind][tar]!=-1)return dp[ind][tar];
        int nt=func(ind-1,tar,nums,dp);
        int take=INT_MAX;
        if(nums[ind]<=tar)
        take=func(ind,tar-nums[ind],nums,dp)+1;
        return (dp[ind][tar]=min(take,nt));
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int x=func(coins.size()-1,amount,coins,dp);
         if(x>=1e9)return -1;
             return x;
    }
};