class Solution {
     private:
    vector<int>Indeg;
   
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
          vector<int>adj[numCourses];
        Indeg.resize(numCourses,0);
        for(auto&x:prerequisites) 
        {
            adj[x[1]].push_back(x[0]);
            Indeg[x[0]]++;
        }
        queue<int>q;
        vector<int>sol;
        for(int i=0;i<Indeg.size();i++) if(!Indeg[i])q.push(i);
            
        int c=0;
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            sol.push_back(ele);
            c++;
            for(auto&x:adj[ele])
            {
                if(Indeg[x])
                {
                    Indeg[x]--;
                    if(!Indeg[x])q.push(x);
                          
                }
            }
        }
           if(c!=numCourses)return {};
        return sol;
    }
};