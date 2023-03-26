class Solution {
public:
    int longestCycle(vector<int>& edges) {
        vector<int>dist_node(edges.size(),0);
            vector<bool>visited(edges.size(),false);
            vector<bool>extra(edges.size(),false);
            int ans=-1;
        for(int i=0;i<edges.size();i++)
        {
            if(!visited[i])
            dfs(i,dist_node,visited,extra,0,ans,edges);
        }
        return ans;
    }
        void dfs(int node,vector<int>&dist_node,vector<bool>&visited,vector<bool>&extra,int distance,int&ans,vector<int>& edges)
        {
            if(node!=-1)
            {
                if(!visited[node])
                {
                    visited[node]=true;
                    extra[node]=true;
                    dist_node[node]=distance;
                    dfs(edges[node],dist_node,visited,extra,distance+1,ans,edges);
                    
                }
                else if(extra[node])
                {
                    ans=max(ans,distance-dist_node[node]);
                }
                extra[node]=false;
            }
        }
    
};