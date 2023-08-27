#define ll long long
class Solution {
    private:
    ll MOD=(ll)1e9+7;
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<ll,ll>>adj[n];
        for(auto&x:roads)
        {
            adj[x[0]].push_back({x[1],x[2]});
            adj[x[1]].push_back({x[0],x[2]});
        }
        
       vector<ll>dist(n,LONG_MAX);
        vector<ll>ways(n,0);
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q;
        q.push({0,0});
        dist[0]=0;
        ways[0]=1;
       
        while(!q.empty())
        {
          auto ele=q.top();
            q.pop();
            for(auto&x:adj[ele.second])
            {
                ll total_cost=ele.first+x.second;
                
                if(dist[x.first]>total_cost)
                {
                    dist[x.first]=total_cost;
                    ways[x.first]=ways[ele.second];
                    q.push({total_cost,x.first});
                }
                else if(dist[x.first]==total_cost)
                {
                    ways[x.first]=(ways[x.first]+ways[ele.second])%MOD;
                }
            }
        }

        return  ways[n-1];
        
    }
};





