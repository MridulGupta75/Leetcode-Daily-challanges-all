class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,vector<int>>mpp;
        for(auto&x:arr)
        {
            int k=__builtin_popcount(x);
            mpp[k].push_back(x);
        }
          vector<int>sol;
        for(auto&x:mpp)
            for(auto&y:x.second)sol.push_back(y);
        return sol;
    }
};