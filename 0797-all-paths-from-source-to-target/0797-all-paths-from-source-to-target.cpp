class Solution {
    private:
    vector<int>subsol;
    vector<vector<int>>sol;
    void DFS(int src,int dest,vector<vector<int>>& adj)
    {
        subsol.push_back(src);
        if(src==dest)
        {
            sol.push_back(subsol);
            return ;
        }
        for(auto&x:adj[src])
        {
             DFS(x,dest,adj);
            subsol.pop_back();
        }
           
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      
      DFS(0,graph.size()-1,graph);
        return sol;
    }
};