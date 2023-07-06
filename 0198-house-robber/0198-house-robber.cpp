class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>total(nums.size(),-1);
        for(int i=0;i<nums.size();i++)
            total[i]=nums[i];
        for(int i=2;i<nums.size();i++)
        {
            for(int j=0;j<=i-2;j++)
                total[i]=max(total[j]+nums[i],total[i]);
        }
        return(*max_element(total.begin(),total.end()));
    }
};