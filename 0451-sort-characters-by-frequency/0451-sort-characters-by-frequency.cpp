class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.length();i++)
          mpp[s[i]]++;
        priority_queue<pair<int,char>>pq;
        for(auto&x:mpp)
            pq.push({x.second,x.first});
        string sol="";
        // cout<<pq.top().first<<" "<<pq.top().second;
        while(!pq.empty())
        {
            sol+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return sol;
    }
};