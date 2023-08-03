class Solution {
public:
    
    void DFS(vector<vector<int>>&edges,vector<bool>&vis,int i)
    {
        vis[i]=1;
        for(auto&x:edges[i])
        {
             if(!vis[x])
           {
              
               DFS(edges,vis,x);
               
           }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
         vector<vector<int>>edges(isConnected.size()+1);
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1&&i!=j)
                {
                    edges[i].push_back(j);
                    edges[j].push_back(i);
                }
            }
        }
        vector<bool>vis(edges.size());
        int c=0;
        for(int i=0;i<edges.size();i++)
        {
           if(!vis[i])
           {
                 c++;
               DFS(edges,vis,i);
             
           }
        }
        return c-1;
        
        
    }
};