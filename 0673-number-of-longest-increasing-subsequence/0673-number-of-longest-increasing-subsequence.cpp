class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1),count(n,1);
        int sol=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i]&&dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                    count[i]=count[j];
                }
                else if(nums[j]<nums[i]&&dp[i]==dp[j]+1)count[i]+=count[j];
            }
            sol=max(sol,dp[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(dp[i]==sol)ans+=count[i];
        }
        return ans;
    }
};