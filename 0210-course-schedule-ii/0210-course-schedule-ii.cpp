class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         vector<int>indeg(numCourses,0);
       vector<int>adj[numCourses];
        for(auto&x:prerequisites)
        {
            adj[x[1]].push_back(x[0]);
            indeg[x[0]]++;
        }
        
        queue<int>q;
        
        for(int i=0;i<indeg.size();i++) if(indeg[i]==0) q.push(i);
        
         vector<int>c;          
        
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            c.push_back(ele);
            for(auto&x:adj[ele])
            {
                indeg[x]--;
                if(indeg[x]==0)q.push(x);
            }
        }
        if(c.size()==numCourses)return c;
        return {};
    }
};