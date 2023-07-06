class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int len=INT_MAX;
        int sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
         while(sum>=target)
            {
                len=min(len,j-i+1);
             sum-=nums[i];
             i++;
                
            }
            j++;
        }
        return len==INT_MAX?0:len;
    }
};