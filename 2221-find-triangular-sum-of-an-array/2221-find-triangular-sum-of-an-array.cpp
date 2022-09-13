class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size=nums.size();
            while(size>1)
            {
                int x=nums.size();
                for(int i=0;i<x-1;i++)
                 nums[i]=(nums[i]+nums[i+1])%10;
                nums.pop_back();
                size--;
            }
        
        return nums[0];
    }
};