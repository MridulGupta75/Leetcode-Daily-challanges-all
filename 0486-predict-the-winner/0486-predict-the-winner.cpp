class Solution {
public:
    int func(int i,int j,vector<int>& nums, vector<vector<int>>&dp)
    {
        if(i>j)return 0;
        if(i==j)return nums[i];
        // if(dp[i][j]!=-1)return -1;
       int c1=nums[i]+min(func(i+2,j,nums,dp),func(i+1,j-1,nums,dp));
       int c2=nums[j]+min(func(i,j-2,nums,dp),func(i+1,j-1,nums,dp));
        return max(c1,c2);
        
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector(nums.size(),-1));
        int x= func(0,nums.size()-1,nums,dp);
        int sum=0;
        for(auto&x:nums)
            sum+=x;
       int p2=sum-x;
        if(x>=p2)return true;
        return false;
    }
};