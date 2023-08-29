
 class DisjointSet
{
	private:
	vector<int>parent,size;
	public:
   DisjointSet(int N)
   {
      parent.resize(N+1);
	  size.resize(N+1,1);
	  for(int i=0;i<=N;i++)parent[i]=i;
   }
   int findUprnt(int x)
   {
      if(x==parent[x])
	  return parent[x];
	  return parent[x]=findUprnt(parent[x]);
   }
   void unionBySize(int u,int v)
   {
     int ultpu=findUprnt(u);
	 int ultpv=findUprnt(v);
	 if(ultpu==ultpv)return;
	 if(size[ultpu]<size[ultpv])
	 {
		 parent[ultpu]=ultpv;
		 size[ultpv]+=size[ultpu];
	 }
	 else
	 {
         parent[ultpv]=ultpu;
		 size[ultpu]+=size[ultpv];
	 }
   }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
         DisjointSet ds(accounts.size());
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
                    ds.unionBySize(i, mapToNode[accounts[i][j]]);
                }
            }
        }
        
        vector<string>storage[accounts.size()];
        for(auto&x:mapToNode)
        {
            int upar=ds.findUprnt(x.second);
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