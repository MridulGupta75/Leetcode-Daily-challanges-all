class Solution {
public:
    
    int func(int ind,int pre,vector<int>& nums,vector<vector<int>>&dp)
    {
        //base case
        if(ind==nums.size())return 0;
        //condition sol
        //take
        int l=INT_MIN;
        if(dp[ind][pre+1]!=-1)return dp[ind][pre+1];
        if(pre==-1||nums[ind]>nums[pre])
          l= 1+func(ind+1,ind,nums,dp);
        //not take
            dp[ind][pre+1]=max(l,0+func(ind+1,pre,nums,dp));
                return l=dp[ind][pre+1];

    }
    
    int lengthOfLIS(vector<int>& nums) {
        
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return func(0,-1,nums,dp);
    }
};