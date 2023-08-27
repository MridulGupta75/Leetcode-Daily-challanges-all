class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(auto&x:times)
            adj[x[0]].push_back({x[1],x[2]});
        
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({k,0});
        while(!q.empty())
        {
            auto ele=q.top();
            q.pop();
            for(auto&x:adj[ele.first])
            {
                int total_cost=ele.second+x.second;
                if(total_cost<dist[x.first])
                {
                    dist[x.first]=ele.second+x.second;
                    q.push({x.first,ele.second+x.second});
                }
            }
        }
        int maxi=0;
        for(int i=1;i<dist.size();i++)
        {
            // cout<<dist[i]<<" ";
            if(dist[i]==INT_MAX)return -1;
            maxi=max(dist[i],maxi);
        }
        return maxi;
        
    }
};