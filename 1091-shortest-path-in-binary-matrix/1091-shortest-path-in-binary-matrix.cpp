class Solution {
public:
    vector<pair<int,int>>pr{{-1,0},{1,0},{0,1},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1}};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1||grid[n-1][n-1]==1)return -1;
        vector<vector<int>>disgrid(n,vector<int>(n,INT_MAX));
        queue<vector<int>>q;
        q.push({0,0,0});
        disgrid[0][0]=0;
        while(!q.empty())
        {
            int r=q.front()[0];
            int c=q.front()[1];
            int dis=q.front()[2];
            q.pop();
            for(auto&x:pr)
            {
                int rr=r+x.first;
                int cc=c+x.second;
                if(rr>=0&&rr<n&&cc>=0&&cc<n&&grid[rr][cc]==0)
                {
                    if(dis+1<disgrid[rr][cc])
                    {
                        disgrid[rr][cc]=dis+1;
                        q.push({rr,cc,dis+1});
                    }
                }
            }
        }
        
        
        // for(auto&x:disgrid)
        // {
        //     for(auto&y:x)
        //         cout<<y<<" ";
        //     cout<<endl;
        // }
        return disgrid[n-1][n-1]==INT_MAX?-1:disgrid[n-1][n-1]+1;
        
    }
};