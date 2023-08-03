class Solution {
public:
    vector<pair<int,int>>pr{{-1,0},{1,0},{0,-1},{0,1}};
    void DFS(int&color,int row,int col,vector<vector<int>>& image,int pre,vector<vector<bool>>& vis)
    {
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty())
        {
            
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
         
                image[r][c]=color;
               vis[r][c]=1;
                for(auto&x:pr)
                {
                    int rr=r+x.first;
                    int cc=c+x.second;
                    if(rr>=0&&cc>=0&&rr<image.size()&&cc<image[0].size()&&image[rr][cc]==pre&&!vis[rr][cc])
                    {
                        q.push({rr,cc});
                    }
                }
              
         }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>>vis(image.size(),vector<bool>(image[0].size(),0));
        DFS(color,sr,sc,image,image[sr][sc],vis);
        return image;
    }
};