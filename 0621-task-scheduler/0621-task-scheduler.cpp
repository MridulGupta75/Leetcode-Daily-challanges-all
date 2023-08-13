class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(tasks.size()==1||n==0)return tasks.size();
        unordered_map<char,int>mpp;
        for(auto&x:tasks)mpp[x]++;
        priority_queue<int>pq;
        queue<pair<int,int>>q;
        for(auto&x:mpp)pq.push(x.second);
        int t=0;
        while(!pq.empty() || !q.empty())
        {
            
            if(!q.empty())
            {
                int k=q.front().second;
                if(k<=t)
                {
                    pq.push(q.front().first);
                    q.pop();
                }
                // else break;
            }
            
            if(!pq.empty())
            {
            
            int x=pq.top();
            pq.pop();
            if(x!=1)
            q.push({x-1,t+n+1});
            }
            
            t++;
            
            
        }
        return t;
        
    }
};