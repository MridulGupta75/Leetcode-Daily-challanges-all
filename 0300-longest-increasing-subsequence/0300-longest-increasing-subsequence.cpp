class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp;
        int l=1;
        dp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>dp.back())
            {
                dp.push_back(nums[i]);
                l++;
            }
            else
            {
                int index=lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
                dp[index]=nums[i];
            }
        }
        return l;
    }
};