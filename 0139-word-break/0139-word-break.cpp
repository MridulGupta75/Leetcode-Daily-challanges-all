class Solution {
    private:
    set<string>Dict_to_set;
    bool solve(int index,int&n,string&s,vector<int>&DP)
    {
        if(index>n)return false;
        if(Dict_to_set.find(s.substr(index))!=Dict_to_set.end())return true;
        if(DP[index]!=-1)return DP[index];
        for(int i=index;i<=n;i++)
        {
           if(Dict_to_set.find(s.substr(index,i-index+1))!=Dict_to_set.end()&&solve(i+1,n,s,DP))
               return DP[index]=true;
        }
        return DP[index]=false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto&x:wordDict)Dict_to_set.insert(x);
        vector<int>DP(s.size(),-1);
        int n=s.size()-1;
       return  solve(0,n,s,DP);
    }
};