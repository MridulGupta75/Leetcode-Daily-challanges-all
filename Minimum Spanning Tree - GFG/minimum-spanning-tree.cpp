//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
            \vector<bool>visited(n,0);
      priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
      pq.push({0,0});
      int sum=0;
      while(!pq.empty())
      {
        auto x=pq.top();
        pq.pop();
        if(visited[x[1]])continue;
        
          visited[x[1]]=1;
          sum+=x[0];
          for(auto&itr:adj[x[1]])
            if(!visited[itr[0]])
             pq.push({itr[1],itr[0]});
      }
      return sum;
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
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends