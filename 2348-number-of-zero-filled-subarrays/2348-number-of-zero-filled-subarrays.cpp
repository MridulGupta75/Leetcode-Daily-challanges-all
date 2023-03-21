class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long total=0,curr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) curr++,total+=curr;
            else curr=0;
        }
        return total;
        
    }
};