class Solution {
    private:
    vector<pair<int,int>>pr{{1,0},{-1,0},{0,1},{0,-1}};
public:
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        //{dis,row,col}
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>q;
        q.push({0,0,0});
        dist[0][0]=0;
        while(!q.empty())
        {
            int dis=q.top()[0];
            int r=q.top()[1];
            int c=q.top()[2];
            q.pop();
            if(r==n-1&&c==m-1)return dis;
            for(auto&x:pr)
            {
                int rr=r+x.first;
                int cc=c+x.second;
                if(rr>=0&&rr<n&&cc>=0&&cc<m)
                {
                    int effort=max((abs(heights[r][c]-heights[rr][cc])),dis);
                    if(effort<dist[rr][cc])
                    {
                        dist[rr][cc]=effort;
                        q.push({effort,rr,cc});
                    }
                }
            }
        }
        return 0;
    }
};