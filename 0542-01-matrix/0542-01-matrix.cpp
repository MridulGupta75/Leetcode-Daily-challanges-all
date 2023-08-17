class Solution {
private:
    vector<pair<int,int>>pr{{-1,0},{0,1},{0,-1},{1,0}};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>sol(mat.size(),vector<int>(mat[0].size(),-1));
         queue<vector<int>>q;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    sol[i][j]=0;
                    q.push({i,j});
                }
              
            }
        }
                   while(!q.empty())
                    {
                        int l=q.front()[0];
                        int m=q.front()[1];
                        // int wt=q.front()[2];
                         q.pop();
                        for(auto&x:pr)
                        {
                            int ll=l+x.first;
                            int mm=m+x.second;

                            if(ll>=0&&ll<mat.size()&&mm>=0&&mm<mat[0].size()&&sol[ll][mm]==-1)
                            {
                                sol[ll][mm]=sol[l][m]+1;
                                q.push({ll,mm});
                            }
                             
        
                        }
                        
                    }//while
        return sol;
        
    }
};