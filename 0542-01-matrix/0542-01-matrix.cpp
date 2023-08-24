class Solution {
    private:
    vector<pair<int,int>>pr{{-1,0},{0,-1},{1,0},{0,1}};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<vector<int>>q;
        vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(),0));
         vector<vector<int>>sol(mat.size(),vector<int>(mat[0].size(),0));
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j,0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            for(auto&y:pr)
            {
                int new_row=x[0]+y.first;
                int new_col=x[1]+y.second;
                if(new_row>=0&&new_row<mat.size()&&new_col>=0&&new_col<mat[0].size()&&vis[new_row][new_col]==0)
                {
                    vis[new_row][new_col]=1;
                    sol[new_row][new_col]=x[2]+1;
                    q.push({new_row,new_col,x[2]+1});
                }
            }
        }
        return sol;
    }
};