class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        for(auto x:nums)
        {
            auto itr=mpp.find(x);
            if(itr==mpp.end())
            {
                mpp.insert({x,1});
            }
            else itr->second=(itr->second)+1;
        }
        int max=INT_MIN;
        int pos;
        for(auto x:mpp)
        {
            if(x.second>max)
            {
            max=x.second;
             pos=x.first;
            }
        }
        return pos;
    }
};