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
    int makeConnected(int n, vector<vector<int>>& edges) {
        if(n-1>edges.size())return -1;
        DisjointSet ds(n);
        for(auto&x:edges)
        ds.ubs(x[0],x[1]);
        int c=-1;
        for(int i=0;i<n;i++)
        if(ds.parent[i]==i)c++;
        
        return c;
    }
};