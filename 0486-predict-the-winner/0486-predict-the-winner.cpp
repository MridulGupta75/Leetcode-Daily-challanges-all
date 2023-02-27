class Solution {
public:
    
    int fun(vector<int>&nums,int i,int j, vector<vector<int>>&dp)
    {
        if(i==j)return nums[j];
          if(dp[i][j]==-1)
        dp[i][j]= max(nums[i]-fun(nums,i+1,j,dp),nums[j]-fun(nums,i,j-1,dp));
        return dp[i][j];
    }
    bool PredictTheWinner(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        if(fun(nums,i,j,dp)>=0)return true;
        return false;
        
    }
};