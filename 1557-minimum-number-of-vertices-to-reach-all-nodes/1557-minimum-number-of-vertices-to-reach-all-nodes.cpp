class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>indeg(n,0);
        vector<int>sol;
        for(auto&x:edges)
        {
            indeg[x[1]]++;
        }
        for(int x=0;x<indeg.size();x++)
            if(indeg[x]==0)sol.push_back(x);
        return sol;
    }
};