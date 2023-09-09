class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int key=q.front();
            q.pop();
            for(auto&x:rooms[key])
            {
                if(!vis[x])
                {
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
     for(int i=0;i<rooms.size();i++)if(!vis[i])return false;
        return true;
    }
};