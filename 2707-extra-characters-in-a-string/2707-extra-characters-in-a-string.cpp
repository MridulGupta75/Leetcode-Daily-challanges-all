class Solution {
    private:
    set<string>st;
    int func(int index,string&s, vector<int>&dp)
    {
        if(index>=s.size())return 0;
        if(dp[index]!=-1)return dp[index];
        string str="";
        int mini=s.size();
        for(int i=index;i<s.size();i++)
        {
            str.push_back(s[i]);
            int currLen=(st.find(str)==st.end())?str.size():0;
            int extraLen=func(i+1,s,dp);
            int total=currLen+extraLen;
            mini=min(mini,total);
        }
        return dp[index]=mini;
    }
public:
    int minExtraChar(string s, vector<string>& dictionary) {
       for(auto&x:dictionary)st.insert(x);
     vector<int>dp(s.size()+1,-1);
        return func(0,s,dp);
        
    }
};