class Solution {
    private:
    bool BFS(vector<vector<int>>& graph,vector<int>&color,int i)
    {
        queue<pair<int,int>>q;
        q.push({i,0});
        color[i]=0;
        while(!q.empty())
        {
            auto ele=q.front();
            q.pop();
            for(auto&x:graph[ele.first])
            {
                if(color[x]==-1)
                {
                    if(ele.second==0)color[x]=1;
                    else color[x]=0;
                }
                else
                {
                    if(ele.second==color[x])return false;    
                    else continue;
                }
                q.push({x,color[x]});
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>color(v,-1);
        for(int i=0;i<v;i++)
        {
            if(color[i]==-1) if(!BFS(graph,color,i))return false;
            
        }
        return true;
    }
};