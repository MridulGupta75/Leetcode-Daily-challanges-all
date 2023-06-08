class Solution {
public:
    int countNegatives(vector<vector<int>>& m) {
        int ans=0;
        for(int i=0;i<m.size();i++)
     ans+=upper_bound(m[i].rbegin(),m[i].rend(),-1)-m[i].rbegin();
    return ans;
    }
};