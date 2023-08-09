class Solution {
public:
    int func(int ind,int pre,vector<int>& nums, vector<vector<int>>&dp)
    {
        if(ind==nums.size())return 0;
        if(dp[ind][pre+1]!=-1)return dp[ind][pre+1];
        int l=func(ind+1,pre,nums,dp);
        if(pre==-1||nums[pre]<nums[ind])
            l=max(l,1+func(ind+1,ind,nums,dp));
        return dp[ind][pre+1]=l;
    }
    int lengthOfLIS(vector<int>& nums) {
     
        vector<int>dp(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        for(int j=0;j<i;j++)
                if(nums[i]>nums[j])
                dp[i]=max(dp[i],dp[j]+1);
        return(*max_element(dp.begin(),dp.end()));
        
    
    }
};