class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // int sum=(n*(n+1))/2;
        // int sumof_array=0;
        // for(auto&x:nums)sumof_array+=x;
        // return sum-sumof_array;
        int xor1=0,xor2=0;
        for(int i=0;i<nums.size();i++)
        {
            xor2=xor2^nums[i];
            xor1=xor1^(i+1);
        }
        // xor1=xor1^(nums.size());
        return xor1^xor2;
        
    }
};