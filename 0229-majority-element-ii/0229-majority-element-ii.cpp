class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1=INT_MIN;
        int num2=INT_MIN;
        int ct1=0;
        int ct2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(ct1==0&&num2!=nums[i])
            {
                ct1=1;
                num1=nums[i];
            }
            else if(ct2==0&&num1!=nums[i])
            {
                ct2=1;
                num2=nums[i];
            }
            else if(nums[i]==num1)ct1++;
            else if(nums[i]==num2)ct2++;
            else ct1--,ct2--;
            
        }
        int ct11=0,ct22=0;
        for(auto&x:nums)
        {
            if(x==num1)ct11++;
            else if(x==num2)ct22++;
        }
        vector<int>x;
        if(ct11>nums.size()/3)x.push_back(num1);
        if(ct22>nums.size()/3)x.push_back(num2);
        return x;
    }
};