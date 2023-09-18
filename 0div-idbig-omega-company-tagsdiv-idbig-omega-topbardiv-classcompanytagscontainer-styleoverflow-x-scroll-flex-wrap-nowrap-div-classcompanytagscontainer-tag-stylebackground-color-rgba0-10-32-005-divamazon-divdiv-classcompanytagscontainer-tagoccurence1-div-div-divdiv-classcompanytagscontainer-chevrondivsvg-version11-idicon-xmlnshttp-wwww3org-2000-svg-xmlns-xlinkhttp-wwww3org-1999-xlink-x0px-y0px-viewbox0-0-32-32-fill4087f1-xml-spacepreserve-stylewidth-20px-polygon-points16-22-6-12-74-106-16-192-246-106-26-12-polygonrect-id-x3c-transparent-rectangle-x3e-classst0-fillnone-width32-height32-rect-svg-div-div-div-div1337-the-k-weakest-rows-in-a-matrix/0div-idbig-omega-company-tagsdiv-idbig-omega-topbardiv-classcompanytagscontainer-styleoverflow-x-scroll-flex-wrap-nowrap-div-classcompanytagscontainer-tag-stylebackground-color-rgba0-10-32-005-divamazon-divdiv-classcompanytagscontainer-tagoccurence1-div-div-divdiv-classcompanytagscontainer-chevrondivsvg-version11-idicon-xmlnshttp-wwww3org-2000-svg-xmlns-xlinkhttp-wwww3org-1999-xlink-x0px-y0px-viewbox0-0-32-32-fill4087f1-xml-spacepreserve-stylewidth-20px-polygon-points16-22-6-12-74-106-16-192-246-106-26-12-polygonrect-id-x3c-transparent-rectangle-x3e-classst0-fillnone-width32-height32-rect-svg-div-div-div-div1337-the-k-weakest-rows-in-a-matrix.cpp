class Solution {
    private:
    priority_queue<pair<int,int>>pq;
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        for(int i=0;i<mat.size();i++)
        {
            int c=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j])c++;
                else break;
            }
            pq.push({c,i});
            if(pq.size()>k)pq.pop();
        }
        vector<int>sol(k);
        while(!pq.empty())
        {
            sol[k-1]=(pq.top().second);
            k--;
            pq.pop();
        }
        return sol;
    }
};