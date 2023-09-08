class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>indeg(n,0);
        for(auto&x:edges) indeg[x[1]]=true;
        vector<int>sol;
        for(int i=0;i<n;i++)if(!indeg[i])sol.push_back(i);
        return sol;
    }
};