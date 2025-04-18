class Solution {
public:
    bool check(vector<int>& nums) {
        int peak=0,j=nums.size();

       for(int i=1;i<j;i++)
       {
        if(nums[i-1]>nums[i]) peak++;

       }
       if(nums[j-1]>nums[0])peak++;
       return peak<=1;


    }
};