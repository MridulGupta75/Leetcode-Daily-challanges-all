class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>indeg(n,false);
        vector<int>sol;
        for(auto&x:edges)
        {
            indeg[x[1]]=true;
        }
        for(int x=0;x<indeg.size();x++)
            if(indeg[x]==false)sol.push_back(x);
        return sol;
    }
};