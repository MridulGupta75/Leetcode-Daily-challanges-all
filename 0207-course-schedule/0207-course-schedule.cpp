class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indeg(numCourses,0);
       vector<int>adj[numCourses];
        for(auto&x:prerequisites)
        {
            adj[x[1]].push_back(x[0]);
            indeg[x[0]]++;
        }
        queue<int>q;
        for(int i=0;i<indeg.size();i++)if(indeg[i]==0)q.push(i);
        int c=0;                                             
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            c++;
            for(auto&x:adj[ele])
            {
                indeg[x]--;
                if(indeg[x]==0)q.push(x);
            }
        }
        return c==numCourses?true:false;                                             
        
    }
};