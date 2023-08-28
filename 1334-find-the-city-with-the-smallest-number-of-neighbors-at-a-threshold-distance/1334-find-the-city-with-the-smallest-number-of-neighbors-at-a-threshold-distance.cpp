class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>mat(n,vector<int>(n,1e9));
        for(auto&x:edges)
        {
            mat[x[0]][x[1]]=x[2];
            mat[x[1]][x[0]]=x[2];
        }
        for(int i=0;i<n;i++)mat[i][i]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                   if(mat[j][i] !=1e9 and mat[i][k] !=1e9)
                   mat[j][k]=min(mat[j][k],mat[j][i]+mat[i][k]);                 
                }
            }
        }
        int mini=INT_MAX,pos=-1;
         for(int i=0;i<n;i++)
        {
             int c=0;
            for(int j=0;j<n;j++)
            if(i!=j&&mat[i][j]<=distanceThreshold) c++;
                
             if(mini>=c)
             {
                 mini=c;
                 pos=i;
             }
         }
        return pos;
        
    }
};