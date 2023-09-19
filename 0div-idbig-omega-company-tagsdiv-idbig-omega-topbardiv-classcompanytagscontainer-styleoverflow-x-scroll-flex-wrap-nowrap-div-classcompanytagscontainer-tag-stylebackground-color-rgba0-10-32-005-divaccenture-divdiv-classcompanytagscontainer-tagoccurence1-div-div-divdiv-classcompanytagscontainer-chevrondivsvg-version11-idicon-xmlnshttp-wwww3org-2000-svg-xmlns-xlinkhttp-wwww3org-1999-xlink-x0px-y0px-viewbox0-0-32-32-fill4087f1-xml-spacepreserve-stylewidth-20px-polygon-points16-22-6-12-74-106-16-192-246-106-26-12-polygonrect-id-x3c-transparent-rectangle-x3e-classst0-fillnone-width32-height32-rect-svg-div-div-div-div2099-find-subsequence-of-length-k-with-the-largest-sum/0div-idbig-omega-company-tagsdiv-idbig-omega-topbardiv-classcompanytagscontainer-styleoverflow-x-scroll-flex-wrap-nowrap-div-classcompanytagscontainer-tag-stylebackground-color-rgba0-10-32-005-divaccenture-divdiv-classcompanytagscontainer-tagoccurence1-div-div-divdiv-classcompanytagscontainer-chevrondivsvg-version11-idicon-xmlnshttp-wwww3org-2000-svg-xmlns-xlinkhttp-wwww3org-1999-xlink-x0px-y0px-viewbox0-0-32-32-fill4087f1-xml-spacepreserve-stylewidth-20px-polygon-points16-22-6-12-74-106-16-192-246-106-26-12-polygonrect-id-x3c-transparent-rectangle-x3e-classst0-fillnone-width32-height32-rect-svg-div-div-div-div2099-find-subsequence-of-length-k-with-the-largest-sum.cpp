class Solution {
    private:
        typedef pair<int,int> P;
public:
    static bool comp(P&x ,P&y)
    {
        return x.second<y.second;
    }
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<P,vector<P>,greater<P>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
            if(pq.size()>k)pq.pop();
        }
        vector<P>sol;
        while(!pq.empty())
        {
            sol.push_back(pq.top());
            pq.pop();
        }
        sort(sol.begin(),sol.end(),comp);
        vector<int>ans;
        for(auto&x:sol)ans.push_back(x.first);
        return ans;
        
    }
};