//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S
    
    
    
    vector<int>Dijkstra(int V,vector<vector<int>>adj[],int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   
    vector<int>path(V,INT_MAX);
     pq.push({0,src});
    path[src]=0;
    while(!pq.empty())
    {
        int dis=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        for(auto&x:adj[node])
        {
            int newdis=x[1]+dis;
            int newnode=x[0];
            if(path[newnode]>newdis)
            {
                path[newnode]=newdis;
                pq.push({newdis, newnode});
            }

        }
    }
    return path;
}





    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        return Dijkstra(V,adj,S);
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends