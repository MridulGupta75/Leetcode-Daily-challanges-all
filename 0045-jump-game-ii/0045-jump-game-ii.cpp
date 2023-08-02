class Solution {
public:
    int func(int ind,vector<int>&nums, vector<int>&dp)
    {
       
        if(ind==nums.size()-1) return 0;
        if(ind>=nums.size())return 1e9;
        if(dp[ind]!=-1)return dp[ind];
        int mini=1e5;
        for(int i=1;i<=nums[ind];i++)
        {
            mini=min(mini,1+func(i+ind,nums,dp)); 
        }
        
        return dp[ind]=mini;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return func(0,nums,dp);
    }
};