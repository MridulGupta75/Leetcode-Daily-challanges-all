class Solution {
    private:
    priority_queue<pair<int,int>>pq;
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat[0].size();
        for(int i=0;i<mat.size();i++)
        {
            int c=lower_bound(mat[i].rbegin(), mat[i].rend(),1)-mat[i].rbegin();
            c=m-c;
            // cout<<c;
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