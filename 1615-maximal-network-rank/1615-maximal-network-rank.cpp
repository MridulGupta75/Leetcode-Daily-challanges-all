class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        set<int>arr[n];
        for(auto&y:roads)
        {
            
                arr[y[0]].insert(y[1]);
                arr[y[1]].insert(y[0]);
            
        }

        vector<int>indeg(n,0);
        for(int x=0;x<n;x++)
         for(auto&y:arr[x]) indeg[x]++;
        
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=indeg[i]+indeg[j];
                if(arr[i].find(j)!=arr[i].end())k--;
                ans=max(ans,k);
            }
        }
        return ans;
       
    }
};