class Solution {
      private:
    vector<pair<int,int>>pr{{-1,0},{0,-1},{1,0},{0,1}};
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,0));
         vector<vector<char>>sol(m,vector<char>(n,'O'));
        queue<pair<int,int>>q;
        for(int j=0;j<n;j++)
        {
            if(board[0][j]=='O')
            {
                q.push({0,j});
                vis[0][j]=1;
            }
            if(board[m-1][j]=='O')
            {
                  q.push({m-1,j});
                  vis[m-1][j]=1;
            }
            
        }
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
            {
                q.push({i,0});
                vis[i][0]=1;
            }
            if(board[i][n-1]=='O')
            {
                  q.push({i,n-1});
                  vis[i][n-1]=1;
            }
        }
        // cout<<q.front().first<<" "<<q.front().second<<" "<<q.size();
        while(!q.empty())
        {
            auto t=q.front();
            q.pop();
            for(auto&x:pr)
            {
                int nr=t.first+x.first;
                int nc=t.second+x.second;
                if(nr>=0&&nr<m&&nc>=0&&nc<n&&board[nr][nc]=='O'&&vis[nr][nc]!=1)
                {
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
        
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               
                if(vis[i][j]!=1)
                    sol[i][j]='X';
            }
            
        }
       board=sol;
        
    }
};