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
        // vector<vector<int>>dp(nums.size(),vector(nums.size()+1,-1));
        // return func(0,-1,nums,dp);
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector(n+1,0));
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int pre=ind-1;pre>=-1;pre--)
            {
                int l=dp[ind+1][pre+1];
                if(pre==-1||nums[pre]<nums[ind])
                    l=max(l,dp[ind+1][ind+1]+1);
                dp[ind][pre+1]=l;
            }
        }
        return dp[0][0];
    }
};