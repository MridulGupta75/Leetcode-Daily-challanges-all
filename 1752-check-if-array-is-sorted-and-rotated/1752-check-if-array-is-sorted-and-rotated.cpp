class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size()-1;i++)
        if(nums[i]>nums[i+1])c++;
        
        if(nums[nums.size()-1]>nums[0])c++;
        return c<=1?true:false;
    }
};