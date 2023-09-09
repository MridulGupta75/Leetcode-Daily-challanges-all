class Solution {
    int solve(int target,vector<int>& nums,vector<int>&dp)
    {
        if(target==0)return 1;
        int ans=0;
        if(dp[target]!=-1)return dp[target];
        for(int i=0;i<nums.size();i++)
        {
            if(target>=nums[i]) ans+=solve(target-nums[i],nums,dp);  
            else break;
        }
       return  dp[target]=ans;
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>dp(target+1,-1);
        return solve(target,nums,dp);
    }
};