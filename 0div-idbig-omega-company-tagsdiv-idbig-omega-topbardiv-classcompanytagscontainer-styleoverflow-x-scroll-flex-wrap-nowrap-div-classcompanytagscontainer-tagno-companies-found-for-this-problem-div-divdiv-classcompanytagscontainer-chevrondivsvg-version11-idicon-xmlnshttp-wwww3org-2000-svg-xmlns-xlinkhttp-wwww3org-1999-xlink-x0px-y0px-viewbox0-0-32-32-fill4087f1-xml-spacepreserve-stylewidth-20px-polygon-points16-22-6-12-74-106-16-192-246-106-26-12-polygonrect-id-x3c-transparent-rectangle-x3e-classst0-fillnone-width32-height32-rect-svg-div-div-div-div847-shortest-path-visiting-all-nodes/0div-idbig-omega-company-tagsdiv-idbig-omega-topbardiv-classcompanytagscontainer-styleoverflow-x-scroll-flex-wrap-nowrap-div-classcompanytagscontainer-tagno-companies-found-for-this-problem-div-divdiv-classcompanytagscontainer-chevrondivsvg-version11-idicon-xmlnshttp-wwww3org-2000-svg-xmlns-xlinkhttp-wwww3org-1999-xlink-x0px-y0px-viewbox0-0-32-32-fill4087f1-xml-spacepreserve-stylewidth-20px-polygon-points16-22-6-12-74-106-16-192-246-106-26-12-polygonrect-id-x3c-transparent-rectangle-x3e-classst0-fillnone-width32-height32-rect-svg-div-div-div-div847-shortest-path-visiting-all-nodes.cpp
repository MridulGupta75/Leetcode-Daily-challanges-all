typedef pair<int,int> P;
class Solution {
    private:
     queue<P>q;
     set<P>st;
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        if(graph.size()==0||graph.size()==1)return 0;
       for(int i=0;i<graph.size();i++)
       {
           int bits=1;
           bits=bits<<i;
           q.push({i,bits});
           st.insert({i,bits});
       }
        int stop=(1<<graph.size())-1;
        int path=0;
        while(!q.empty())
        {
            int size=q.size();
            path++;
            while(size--)
            {
            auto pr=q.front();
            q.pop();
            // if(pr.second==stop)return path;
                for(auto&x:graph[pr.first])
                {
                    //x ->2  0001 |  0010 {x,bit}
                    int bit_val=pr.second | (1<<x);
                    if(bit_val==stop)return path;
                    if(st.find({x,bit_val})==st.end())
                    {
                        q.push({x,bit_val});
                        st.insert({x,bit_val});
                    }
                }
            }
         
        }
        return 1;
    }
};