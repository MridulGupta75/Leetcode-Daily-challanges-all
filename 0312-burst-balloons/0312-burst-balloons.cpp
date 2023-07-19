class Solution {
public:
    int func(int i,int j,vector<int>& nums, vector<vector<int>>&dp)
    {
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mini=INT_MIN;
        for(int k=i;k<=j;k++)
        {
            int cost=(nums[i-1]*nums[k]*nums[j+1])+func(i,k-1,nums,dp)+func(k+1,j,nums,dp);
            mini=max(mini,cost);
        }
        return dp[i][j]=mini;
    }
    int maxCoins(vector<int>& nums) {
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        int n=nums.size();
        vector<vector<int>>dp(n,vector(n,-1));
        return func(1,nums.size()-2,nums,dp);
    }
};