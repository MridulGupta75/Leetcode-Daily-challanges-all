class Solution {
public:
    int LIS(vector<int>&nums,int ind,int pre,vector<vector<int>>&dp)
    {
        if(ind==nums.size())
         return 0; 
         //take
        int l=INT_MIN;
        if(dp[ind][pre+1]!=-1)return dp[ind][pre+1];
        if(pre==-1||(nums[ind]>nums[pre]))
        l=1+LIS(nums,ind+1,ind,dp);
        //not take
     dp[ind][pre+1]=max(LIS(nums,ind+1,pre,dp),l);
        return dp[ind][pre+1];
       
    }
    int lengthOfLIS(vector<int>& nums) {
       vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return LIS(nums,0,-1,dp);
    }
};
