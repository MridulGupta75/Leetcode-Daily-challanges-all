class Solution {
public:
    
    int func(vector<int>& nums,int index,int pre_index, vector<vector<int>>&dp)
    {
        //base case
        
        if(index==nums.size())return 0;
        
        //all possibilites
        //take
        int l=INT_MIN;
        if(dp[index][pre_index+1]!=-1)return dp[index][pre_index+1];
        if(pre_index==-1||nums[index]>nums[pre_index])
        l= 1+func(nums,index+1,index,dp);
        //not take
        l=max(l,0+func(nums,index+1,pre_index,dp));
        dp[index][pre_index+1]=l;
        return l;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return func(nums,0,-1,dp);
    }
};