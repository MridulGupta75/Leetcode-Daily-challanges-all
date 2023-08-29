
 class DijointSet
    {
        private:
     vector<int>parent,size;
     public:
     DijointSet(int N)
     {
         parent.resize(N+1);
         size.resize(N+1,1);
         for(int i=0;i<=N;i++)parent[i]=i;
     }
     int findUParent(int x)
     {
         if(x==parent[x])return x;
         return parent[x]=findUParent(parent[x]);
     }
     void UnionBySize(int u,int v)
     {
         int upu=findUParent(u);
         int upv=findUParent(v);
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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        DijointSet ds(accounts.size());
        map<string,int>mapToNode;
        
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=1;j<accounts[i].size();j++)
            {
                if(mapToNode.find(accounts[i][j])==mapToNode.end())
                {
                    mapToNode[accounts[i][j]]=i;
                }
                else
                {
                    ds.UnionBySize(i, mapToNode[accounts[i][j]]);
                }
            }
        }
        
        vector<string>storage[accounts.size()];
        for(auto&x:mapToNode)
        {
            int upar=ds.findUParent(x.second);
            storage[upar].push_back(x.first);
        }
        vector<vector<string>> ans;
        for(int i=0;i<accounts.size();i++)
        {
            if(storage[i].size()==0)continue;
            vector<string>subsol;
            subsol.push_back(accounts[i][0]);
            sort(storage[i].begin(),storage[i].end());
            for(auto&x:storage[i])
            {
                subsol.push_back(x);
            }
            ans.push_back(subsol);
        }
        return ans;
        
    }
};