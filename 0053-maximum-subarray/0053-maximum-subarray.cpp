class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0,max_ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            max_ans=max(curr,max_ans);
            if(curr<0)curr=0;
        }
        return max_ans;
    }
};