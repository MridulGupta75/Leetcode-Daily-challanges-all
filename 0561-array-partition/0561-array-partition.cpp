class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
           int sum=0;
         for(int i=n-2;i>=0;i=i-2)
             sum+=nums[i];
     return sum;
    }
};