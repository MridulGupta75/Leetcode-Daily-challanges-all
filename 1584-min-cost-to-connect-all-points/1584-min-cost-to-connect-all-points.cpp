class DisjointSet
{
  public:
    vector<int>parent;
    vector<int>size;
    DisjointSet(int n)
    {
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++)
            parent[i]=i;
    }
    int fup(int x)
    {
        if(x==parent[x])return x;
        return parent[x]=fup(parent[x]);
    }
    void ubs(int v,int u)
    {
        int upu=fup(u);
        int upv=fup(v);
        if(upu==upv)return ;
        if(size[upu]<size[upv])
        {
            parent[upu]=upv;
            size[upv]+=size[upu];
        }
        else
        {
             parent[upv]=upu;
            size[upu]+=size[upv];
        }
    }
    
};

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
     vector<pair<int,pair<int,int>>>edges;
         for(int i=0;i<points.size()-1;i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                int calcy=abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                edges.push_back({calcy,{i,j}});
            }
        }
        sort(edges.begin(),edges.end());
       int sum=0;
      DisjointSet ds(points.size());
        int n=points.size()-1;
        for(auto&x:edges)
        {
            if(n==0)break;
            if(ds.fup(x.second.first)==ds.fup(x.second.second))continue;
            ds.ubs(x.second.first,x.second.second);
            sum+=x.first;
            n--;
        }
        return sum;
    }
};