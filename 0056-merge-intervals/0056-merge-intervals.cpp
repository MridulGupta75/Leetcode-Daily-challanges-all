class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>sol;
        sort(intervals.begin(),intervals.end());
        for(auto&x:intervals)
        {
            if(sol.empty()||sol.back()[1]<x[0])
                sol.push_back(x);
            else
            {
                sol.back()[1]=max(sol.back()[1],x[1]);
            }
        }
        return sol;
    }
    
};