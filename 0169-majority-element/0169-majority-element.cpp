class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=1;
        int ele=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(ct==0)
            {
                ct=1;
                ele=nums[i];
                
            }
            else if(ele==nums[i])ct++;
            else ct--;
        }
        int ct1=0;
        for(auto&x:nums)
            if(ele==x)ct1++;
        return((ct1>nums.size()/2?ele:-1));
    }
};