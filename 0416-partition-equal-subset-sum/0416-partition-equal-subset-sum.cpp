class Solution {
public:
    bool func(int i,int total,vector<int>& nums,vector<vector<int>>&dp)
    {
        if(i>=nums.size())return false;
        if(total==0)return true;
        if(total<0)return false;
        if(dp[i][total]!=-1)return dp[i][total];
        bool pick=func(i+1,total-nums[i],nums,dp);
        bool notpick=func(i+1,total,nums,dp);
        return dp[i][total]=pick|notpick;
    }
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(auto&x:nums)total+=x;
         if(total%2!=0)return false;
        vector<vector<int>>dp(nums.size()+1,vector(total+1,-1));
        return func(0,(total/2),nums,dp);
    }
};