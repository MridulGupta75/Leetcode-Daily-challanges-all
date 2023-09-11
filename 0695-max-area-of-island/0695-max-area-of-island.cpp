class Solution {
    private:
    vector<pair<int,int>>dir{{1,0},{0,1},{0,-1},{-1,0}};
    int maxi=0;
    bool check(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=0&&i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j])return true;
        return false;
    }
    void BFS(int i,int j, vector<vector<int>>&vis,vector<vector<int>>& grid)
    {
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        int curr=1;
        while(!q.empty())
        {
            auto c=q.front();
            q.pop();
            for(auto&x:dir)
            {
                int ii=c.first+x.first;
                int jj=c.second+x.second;
                if(check(ii,jj,grid)&&!vis[ii][jj])
                {
                    vis[ii][jj]=1;
                    curr++;
                    q.push({ii,jj});
                  
                }
            }
        }
          maxi=max(maxi,curr);
        
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(!vis[i][j]&&grid[i][j])
                {
                    BFS(i,j,vis,grid);
                }
            }
        }
        return maxi;
    }
};