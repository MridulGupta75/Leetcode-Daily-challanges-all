class Solution {
    private:
    int func(int idx,int target,vector<int>& nums)
    {
        if(idx<0)return 0;
        if(idx==0&&(target-nums[idx]==0||target+nums[idx]==0))
        {
           int c=0;
            if(target-nums[idx]==0)c++;
            if(target+nums[idx]==0)c++;
            return c;
        }
        int minus=func(idx-1,target-nums[idx],nums);
        int add=func(idx-1,target+nums[idx],nums);
        return minus+add;
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return func(nums.size()-1,target,nums);
    }
};