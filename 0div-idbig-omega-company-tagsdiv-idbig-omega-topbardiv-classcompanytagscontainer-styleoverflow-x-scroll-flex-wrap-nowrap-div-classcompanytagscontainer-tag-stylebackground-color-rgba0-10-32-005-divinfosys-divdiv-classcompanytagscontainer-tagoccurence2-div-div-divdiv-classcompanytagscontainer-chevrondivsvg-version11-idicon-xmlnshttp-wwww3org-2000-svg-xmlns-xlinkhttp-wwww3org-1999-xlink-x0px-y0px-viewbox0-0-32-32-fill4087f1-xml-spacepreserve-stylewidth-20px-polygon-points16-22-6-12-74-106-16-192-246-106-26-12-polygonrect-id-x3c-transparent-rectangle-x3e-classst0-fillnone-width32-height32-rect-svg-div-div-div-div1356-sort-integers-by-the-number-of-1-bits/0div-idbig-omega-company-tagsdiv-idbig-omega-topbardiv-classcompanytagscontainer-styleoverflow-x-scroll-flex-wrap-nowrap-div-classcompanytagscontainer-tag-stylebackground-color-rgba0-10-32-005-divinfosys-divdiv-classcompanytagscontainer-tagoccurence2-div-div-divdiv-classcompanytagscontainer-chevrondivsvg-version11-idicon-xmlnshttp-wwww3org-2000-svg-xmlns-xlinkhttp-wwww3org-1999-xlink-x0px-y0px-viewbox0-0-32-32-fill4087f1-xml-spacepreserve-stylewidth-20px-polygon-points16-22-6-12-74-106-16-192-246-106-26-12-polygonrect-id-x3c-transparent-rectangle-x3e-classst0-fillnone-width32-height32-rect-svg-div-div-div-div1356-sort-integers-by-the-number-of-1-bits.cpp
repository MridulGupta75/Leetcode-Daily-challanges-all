class Solution {
public:
    static bool comp(int x,int y)
    {
        if(__builtin_popcount(x)==__builtin_popcount(y))return x<y;
        return __builtin_popcount(x)<__builtin_popcount(y);
    }
    vector<int> sortByBits(vector<int>& arr) {
        // sort(arr.begin(),arr.end());
        // map<int,vector<int>>mpp;
        // for(auto&x:arr)
        // {
        //     int k=__builtin_popcount(x);
        //     mpp[k].push_back(x);
        // }
        //   vector<int>sol;
        // for(auto&x:mpp)
        //     for(auto&y:x.second)sol.push_back(y);
        // return sol;
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};