class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>total(nums.size(),1);
        for(int i=1;i<nums.size();i++)
             for(int j=0;j<i;j++)
             if(nums[i]>nums[j])
             total[i]=max(total[j]+1,total[i]);
        return(*max_element(total.begin(),total.end()));
    }
};