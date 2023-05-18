class Solution {
public:
    //moores voting algo
    int majorityElement(vector<int>& nums) {
        int el=nums[0];
        int ct=1;
        for(int i=1;i<nums.size();i++)
        {
            if(ct==0)
            {
                el=nums[i];
                ct=1;
            }
            else if(el==nums[i])ct++;
            else ct--;
        }
        int ct1=0;
        for(auto x:nums)
        {
            if(x==el)ct1++;
        }
        if(ct1>nums.size()/2)return el;
         return -1;
    }
};