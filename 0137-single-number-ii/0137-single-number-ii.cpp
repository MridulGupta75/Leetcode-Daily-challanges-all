class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto&x:nums)
        {
            auto itr=mpp.find(x);
            if(itr!=mpp.end())
           itr->second=(itr->second)+1;
            else
                mpp.insert({x,1});
        }
        for(auto&x:mpp)
        {
            cout<<x.first<<" "<<x.second<<endl;
            if(x.second==1)
                return x.first;
        }
        return 0;
    }
};