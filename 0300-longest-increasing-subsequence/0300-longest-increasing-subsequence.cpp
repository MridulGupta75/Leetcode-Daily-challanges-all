class Solution {
public:
    
    int func(vector<int>& nums,int ind,int pre_ind,vector<vector<int>>&dp)
    {
        //base case
        int l=INT_MIN;
          
        if(ind==nums.size())return 0;
        //all possibilities
        if(dp[ind][pre_ind+1]!=-1)return dp[ind][pre_ind+1];
        //take
        if(pre_ind==-1||nums[ind]>nums[pre_ind])
        l=1+func(nums,ind+1,ind,dp);
        
        //not take
         l=max(l,0+func(nums,ind+1,pre_ind,dp));
            
        //max
        dp[ind][pre_ind+1]=l;
        return l;
            
    }
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        int l=func(nums,0,-1,dp);
        return l;
        
    }
};