class Solution {
    
    int func(int index,int pre,vector<int>& nums,vector<vector<int>>&dp)
    {
        //base condition
        if(index==nums.size())
        {
            return 0;
        }
        //conditions
        int l=INT_MIN;
        if(dp[index][pre+1]!=-1)return dp[index][pre+1];
        if(pre==-1||nums[index]>nums[pre])
        {
            //take
             l=1+func(index+1,index,nums,dp);
           
           
        }
         //not take
         dp[index][pre+1]=max(l,0+func(index+1,pre,nums,dp));
        return dp[index][pre+1];
    }
    
    
    
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        
        return func(0,-1,nums,dp);
    }
};