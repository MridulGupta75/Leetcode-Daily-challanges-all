class Solution {
    private:
    set<string>Dict_to_set;
    bool solve(int index,int n,string&s,vector<vector<int>>&DP)
    {
        if(index>n)return false;
        if(Dict_to_set.find(s.substr(index))!=Dict_to_set.end())return true;
        if(DP[index][n]!=-1)return DP[index][n];
        for(int i=index;i<=n;i++)
        {
           if(Dict_to_set.find(s.substr(index,i-index+1))!=Dict_to_set.end()&&solve(i+1,n,s,DP))
               return DP[index][n]=true;
        }
        return DP[index][n]=false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto&x:wordDict)Dict_to_set.insert(x);
        vector<vector<int>>DP(s.size(),vector<int>(s.size(),-1));
       return  solve(0,s.size()-1,s,DP);
    }
};