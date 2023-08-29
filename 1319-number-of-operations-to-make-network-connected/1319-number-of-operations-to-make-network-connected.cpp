class Solution {
    private:
    void BFS(vector<int>adj[],vector<bool>&vis,int src)
    {
          queue<int>q;
         q.push(src);
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            vis[ele]=1;
            for(auto&x:adj[ele])
            {
                if(!vis[x])
                {
                    vis[x]=1;
                    q.push(x);
                }
            }
        } 
    }
public:
    int makeConnected(int n, vector<vector<int>>& edges) {
        if(n-1>edges.size())return -1;
        vector<int>adj[n];
        for(auto&x:edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
         vector<bool>vis(n,0);
        int c=-1;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                BFS(adj,vis,i);
                c++;
            }
        }
        return c;
      
    }
};