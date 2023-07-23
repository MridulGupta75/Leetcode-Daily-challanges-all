class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto&x:nums)
         mpp[x]++;
        priority_queue<pair<int,int>>pq;
        for(auto&x:mpp)
         pq.push({x.second,x.first});
        
        vector<int>sol;
      while(k--)
      {
            sol.push_back(pq.top().second);
            pq.pop();
        }
        return sol;
    }
};