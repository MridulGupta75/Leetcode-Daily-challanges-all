class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            for(int k=0;k<i;k++)
            {
                if(nums[i]>nums[k])
                {
                   dp[i]=max(dp[k]+1,dp[i]);
                }
            }
        }
        for(auto&x:dp)
            cout<<x<<" ";
       return(*max_element(dp.begin(),dp.end()));
    }
};