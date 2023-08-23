class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mpp;
        for(auto&x:s)mpp[x]++;
        priority_queue<pair<int,char>>pq;
        for(auto&x:mpp) pq.push({x.second,x.first});
        string str="";
        auto c=pq.top();
        str+=c.second;
        pq.pop();
        while(!pq.empty())
        {
            str+=pq.top().second;
            if((c.first)!=1)
            {
                auto a=pq.top();
                 pq.pop();
                pq.push({(c.first)-1,c.second});
                c=a;
            }
            else 
            {
                 auto a=pq.top();
                pq.pop();
                 c=a;
            }
           
        }
        
        return str.size()==s.size()?str:"";
    }
};