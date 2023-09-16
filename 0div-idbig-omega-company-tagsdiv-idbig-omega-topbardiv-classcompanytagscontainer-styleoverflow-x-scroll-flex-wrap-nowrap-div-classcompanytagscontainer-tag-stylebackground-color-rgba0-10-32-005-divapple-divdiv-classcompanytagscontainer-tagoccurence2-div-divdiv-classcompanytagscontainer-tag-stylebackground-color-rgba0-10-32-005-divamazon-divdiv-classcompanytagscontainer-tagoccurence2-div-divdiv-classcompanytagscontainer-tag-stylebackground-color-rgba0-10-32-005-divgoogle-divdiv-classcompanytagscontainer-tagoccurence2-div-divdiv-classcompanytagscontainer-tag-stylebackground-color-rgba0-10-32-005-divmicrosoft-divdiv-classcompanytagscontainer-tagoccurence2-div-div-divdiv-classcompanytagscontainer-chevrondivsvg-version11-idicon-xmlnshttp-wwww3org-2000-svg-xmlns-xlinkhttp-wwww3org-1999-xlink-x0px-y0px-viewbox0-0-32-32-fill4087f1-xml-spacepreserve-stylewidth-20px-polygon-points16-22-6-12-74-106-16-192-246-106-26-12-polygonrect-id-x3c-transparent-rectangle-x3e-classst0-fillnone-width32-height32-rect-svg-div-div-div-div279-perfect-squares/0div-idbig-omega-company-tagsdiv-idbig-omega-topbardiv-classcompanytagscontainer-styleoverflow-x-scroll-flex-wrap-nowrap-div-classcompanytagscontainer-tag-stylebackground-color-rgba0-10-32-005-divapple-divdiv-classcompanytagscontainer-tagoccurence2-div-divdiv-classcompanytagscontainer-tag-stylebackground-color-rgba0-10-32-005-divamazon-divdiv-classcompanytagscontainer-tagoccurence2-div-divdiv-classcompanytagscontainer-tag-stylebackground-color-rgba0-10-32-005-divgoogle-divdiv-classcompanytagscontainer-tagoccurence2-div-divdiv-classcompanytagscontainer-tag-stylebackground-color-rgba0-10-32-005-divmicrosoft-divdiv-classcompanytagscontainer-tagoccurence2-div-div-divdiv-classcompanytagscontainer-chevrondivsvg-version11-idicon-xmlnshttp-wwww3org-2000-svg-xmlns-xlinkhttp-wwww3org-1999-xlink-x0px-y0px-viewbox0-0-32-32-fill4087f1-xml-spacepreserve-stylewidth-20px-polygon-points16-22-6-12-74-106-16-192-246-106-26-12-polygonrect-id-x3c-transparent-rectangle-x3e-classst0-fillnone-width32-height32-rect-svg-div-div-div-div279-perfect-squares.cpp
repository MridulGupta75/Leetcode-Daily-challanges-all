class Solution {
    private:
    int func(int i,vector<int>&nums,int k, vector<vector<int>>&dp)
    {
          if(k==0)return 0;
        if(i<0||k<0)return 1e6;
        if(dp[i][k]!=-1)return dp[i][k];
        int take=1e6;
        if(nums[i]<=k)
         take=func(i,nums,k-nums[i],dp)+1;
        int not_take=func(i-1,nums,k,dp);
        return dp[i][k]=min(take,not_take);
    }
public:
    int numSquares(int n) {
        vector<int>arr;
        for(int i=1;i<=sqrt(n);i++)if(i*i<=n)arr.push_back(i*i);
         vector<vector<int>>dp(arr.size(),vector<int>(n+1,-1));
        return func(arr.size()-1,arr,n,dp);

            
    }
};