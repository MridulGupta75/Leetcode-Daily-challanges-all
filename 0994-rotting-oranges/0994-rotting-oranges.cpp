class Solution {
public:
    vector<pair<int,int>>pr{{-1,0},{1,0},{0,1},{0,-1}};
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)q.push({{i,j},0});
            }
        }
        int cn=0;
    
        while(!q.empty())
        {
           
            int r=q.front().first.first;
            int c=q.front().first.second;
            int tn=q.front().second;
            cn=max(cn,tn);
            q.pop();
            for(auto&x:pr)
            {
                int rr=r+x.first;
                int cc=c+x.second;
                if(rr>=0&&cc>=0&&rr<m&&cc<n&&grid[rr][cc]==1)
                {
                    
                    grid[rr][cc]=2;
                    q.push({{rr,cc},cn+1});
                }
                
            }
        }
        
        for(auto&x:grid)
            for(auto&y:x)
                if(y==1)return -1;
        return cn;
        
    }
};