class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp;
        dp.push_back(nums[0]);
        int l=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>dp.back())
            {
                dp.push_back(nums[i]);
                l++;
            }
            else
            {
                int id=lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
                dp[id]=nums[i];
            }
        }
        return l;
        
    }
};