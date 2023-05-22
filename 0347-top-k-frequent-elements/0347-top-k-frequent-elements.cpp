class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto&x:nums)
        {
          auto itr=mpp.find(x);
            if(itr!=mpp.end())
                itr->second=(itr->second)+1;
            else
                mpp.insert({x,1});
        }
        priority_queue<pair<int,int>>pq;
        for(auto&x:mpp)
        {
            pq.push({x.second,x.first});
        }
        
        vector<int>sol;
        for(int i=0;i<k;i++)
        {
            sol.push_back(pq.top().second);
            pq.pop();
        }
        return sol;
    }
};