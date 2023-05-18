class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1=INT_MIN,el2=INT_MIN;
        vector<int>sol;
       int ct1=0,ct2=0;
        for(auto &x:nums)
        {
            if(ct1==0&&el2!=x)
            {
                el1=x;
                ct1=1;
            }
            else if(ct2==0&&el1!=x)
            {
                el2=x;
                ct2=1;
            }
            else if(x==el1)
            {
                ct1++;
            }
            else if(x==el2)
            {
                ct2++;
            }
            else
            {
                ct1--;
                ct2--;
            }
        }
        int n=nums.size()/3;
        int ct11=0,ct22=0;
        for(auto &x:nums)
        {
            if(x==el1)ct11++;
            if(x==el2)ct22++;
        }
        if(ct11>n)sol.push_back(el1);
        if(ct22>n)sol.push_back(el2);
        return sol;
    }
};