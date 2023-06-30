class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            if(v.empty()||v.back()[1]<intervals[i][0])
            {
                 v.push_back({intervals[i][0],intervals[i][1]});
               
                // v.back()[0]=min(intervals[i][0],v.back()[0]);
            }
            else
                  v.back()[1]=max(intervals[i][1],v.back()[1]);
                 
        }
        return v;
    }
};

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>>sol;
//         sort(intervals.begin(),intervals.end());
//         for(auto&x:intervals)
//         {
//             if(sol.empty()||sol.back()[1]<x[0])
//                 sol.push_back(x);
//             else
//             sol.back()[1]=max(sol.back()[1],x[1]);
//         }
//         return sol;
//     }
    
// };