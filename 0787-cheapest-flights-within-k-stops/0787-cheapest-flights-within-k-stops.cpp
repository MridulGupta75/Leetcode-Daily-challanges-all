class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        //step 1->make an adj list
        vector<pair<int,int>>adj[n];
        //iterate on flights and store the values in adj list
        for(auto&x:flights)
        {
            adj[x[0]].push_back({x[1],x[2]});
        }
    //step 2->make a dis array and make a queue an dpush the initial values
        vector<int>dis(n,INT_MAX);
        dis[src]=0;
        queue<pair<int,int>>q;
        q.push({src,0});
        //iterate  on q with conditions of steps &&till it reaches emptyness
        int steps=0;
        while(!q.empty()&&steps<=k)
        {
            int n=q.size();
            while(n--)
            {
            auto ele=q.front();
            // cout<<ele.first<<" "<<steps<<endl;
            q.pop();
            for(auto&x:adj[ele.first])
            {
                int total_dis=ele.second+x.second;
                if(total_dis<dis[x.first])
                {
                    dis[x.first]=total_dis;
                    q.push({x.first,total_dis});
                }
            }
            }
            steps++;
            
        }
        return dis[dst]==INT_MAX?-1:dis[dst];
        
        
    }
};
