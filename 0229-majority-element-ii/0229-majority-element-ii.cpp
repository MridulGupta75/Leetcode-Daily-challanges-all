class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>sol;
        map<int,int>mpp;
        for(auto &x:nums)
        {
            auto itr=mpp.find(x);
            if(itr!=mpp.end())
            {
                itr->second=(itr->second)+1;
            }
            else{
                mpp.insert({x,1});
            }
        }
        int n=(nums.size())/3;
        for(auto &x:mpp)
        {
            if(x.second>n)sol.push_back(x.first);
        }
        return sol;
        }
};