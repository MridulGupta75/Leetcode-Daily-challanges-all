class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>sol;
        int s1=INT_MIN,s2=INT_MIN;
        int ct1=0, ct2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(ct1==0&&s2!=nums[i])
            {
                ct1=1;
                s1=nums[i];
            }
             else if(ct2==0&&s1!=nums[i])
            {
                ct2=1;
                s2=nums[i];
            }
            else if(s1==nums[i])ct1++;
            else if(s2==nums[i])ct2++;
            else ct1--,ct2--;
        }
        int ct11=0,ct22=0;
        for(auto&x:nums)
        {
            if(x==s1)ct11++;
            if(x==s2)ct22++;
        }
     
        if(ct11>nums.size()/3)sol.push_back(s1);
         if(ct22>nums.size()/3)sol.push_back(s2);
        return sol;
        
    }
};