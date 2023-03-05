class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size(),step=0;
        unordered_map<int,vector<int>>adjmat;
        for(int i=0;i<arr.size();i++)
        adjmat[arr[i]].push_back(i);
         vector<bool>visited(n,false);
        visited[0]=true;
        queue<int>q;
        q.push(0);
        
        
//         for(auto it1:adjmat)
//         {
            
//             cout<<it1.first<<" ";
//             for(auto it:it1.second)
//                 cout<<it<<" ";
//             cout<<endl;
            
          
//         }
        
        
        while(!q.empty())
        {
           for(int s=q.size();s>0;s--)
           {
               int i=q.front();
               q.pop();
              if(i==n-1)return step;
               vector<int>&next=adjmat[arr[i]];
               next.push_back(i-1);
               next.push_back(i+1);
               for(auto j:next)
               {
                   if(j>0&&j<n&&!visited[j])
                   {
                       visited[j]=true;
                       q.push(j);
                   }
               }
               adjmat[arr[i]].clear();
           }
            step++;
        }
        
        
        
        
        return step;
    }
};