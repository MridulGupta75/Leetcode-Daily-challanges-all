class Solution {
public:
    int func(int i,int l,int n,vector<int>&nums, vector<vector<int>>&dp)
    {
        if(i>=n||l<0)return 0;
        if(i==l)return nums[i];
        if(dp[i][l]!=-1)return dp[i][l];
        int k=nums[i]+min(func(i+2,l,n,nums,dp),func(i+1,l-1,n,nums,dp));
        int r=nums[l]+min(func(i,l-2,n,nums,dp),func(i+1,l-1,n,nums,dp));
        return dp[i][l]=max(k,r);
    }
    bool PredictTheWinner(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        int player1=func(0,nums.size()-1,nums.size(),nums,dp);
        
        // cout<<player1;
        int sum=0;
        for(auto&x:nums)sum+=x;
        // cout<<" "<<sum;
        int player2=sum-player1;
        // cout<<" "<<player2;
        return player1>=player2;
        
    }
};