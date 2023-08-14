class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int sumof_array=0;
        for(auto&x:nums)sumof_array+=x;
        return sum-sumof_array;
        
    }
};