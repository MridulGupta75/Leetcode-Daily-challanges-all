class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>adj[graph.size()];
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                adj[graph[i][j]].push_back(i);
            }
        }
        vector<int>indeg(graph.size(),0);
        for(auto&x:adj)
        {
            for(auto&y:x)
            {
                indeg[y]++;
            }
        }
        queue<int>q;
         vector<int>sol;
        for(int i=0;i<indeg.size();i++)
            if(indeg[i]==0)q.push(i);
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            sol.push_back(ele);
            for(auto&x:adj[ele])
            {
                indeg[x]--;
                if(indeg[x]==0)q.push(x);
            }      
        }
        sort(sol.begin(),sol.end());
        return sol;
    }
};