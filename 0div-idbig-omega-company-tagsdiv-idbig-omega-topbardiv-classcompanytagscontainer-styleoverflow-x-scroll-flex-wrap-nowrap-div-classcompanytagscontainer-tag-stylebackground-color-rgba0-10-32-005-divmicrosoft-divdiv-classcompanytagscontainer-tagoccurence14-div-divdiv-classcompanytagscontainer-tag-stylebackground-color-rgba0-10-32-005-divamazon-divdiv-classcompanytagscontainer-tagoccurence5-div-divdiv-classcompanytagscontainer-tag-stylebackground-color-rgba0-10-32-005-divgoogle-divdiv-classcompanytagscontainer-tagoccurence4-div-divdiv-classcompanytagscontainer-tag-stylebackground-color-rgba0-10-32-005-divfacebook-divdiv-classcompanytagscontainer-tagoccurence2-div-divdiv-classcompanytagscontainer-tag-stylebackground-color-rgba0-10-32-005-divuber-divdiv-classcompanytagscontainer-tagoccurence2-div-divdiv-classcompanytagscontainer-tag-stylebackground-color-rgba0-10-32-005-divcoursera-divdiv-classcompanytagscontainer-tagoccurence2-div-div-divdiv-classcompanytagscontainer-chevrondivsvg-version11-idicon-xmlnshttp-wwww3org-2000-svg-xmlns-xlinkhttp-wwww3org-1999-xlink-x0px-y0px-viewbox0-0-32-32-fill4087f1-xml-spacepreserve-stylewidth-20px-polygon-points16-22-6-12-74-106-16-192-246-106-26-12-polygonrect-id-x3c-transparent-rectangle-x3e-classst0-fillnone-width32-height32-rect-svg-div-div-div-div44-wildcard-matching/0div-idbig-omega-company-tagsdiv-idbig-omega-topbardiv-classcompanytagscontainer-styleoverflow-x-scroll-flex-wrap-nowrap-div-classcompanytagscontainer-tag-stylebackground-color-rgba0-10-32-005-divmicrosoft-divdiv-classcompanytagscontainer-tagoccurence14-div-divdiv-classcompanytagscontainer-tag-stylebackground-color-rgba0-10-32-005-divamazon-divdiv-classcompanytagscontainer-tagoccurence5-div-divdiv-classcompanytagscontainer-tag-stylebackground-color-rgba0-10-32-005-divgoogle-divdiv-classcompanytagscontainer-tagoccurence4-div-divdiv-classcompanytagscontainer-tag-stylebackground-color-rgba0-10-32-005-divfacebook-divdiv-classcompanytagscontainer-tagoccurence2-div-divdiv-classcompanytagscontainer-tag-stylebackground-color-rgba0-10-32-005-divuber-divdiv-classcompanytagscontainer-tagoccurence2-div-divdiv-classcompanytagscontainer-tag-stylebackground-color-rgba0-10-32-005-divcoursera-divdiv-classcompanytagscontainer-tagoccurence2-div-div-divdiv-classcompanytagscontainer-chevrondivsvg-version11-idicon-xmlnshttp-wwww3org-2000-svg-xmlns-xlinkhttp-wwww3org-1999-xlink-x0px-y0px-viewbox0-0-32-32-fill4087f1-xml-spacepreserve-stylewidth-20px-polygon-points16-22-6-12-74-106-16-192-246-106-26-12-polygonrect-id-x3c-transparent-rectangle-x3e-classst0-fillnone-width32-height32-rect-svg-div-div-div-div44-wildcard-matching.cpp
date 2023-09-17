class Solution {
    private:
    bool func(int i,int j,string&s,string &p,vector<vector<int>>&dp)
    {
        if(i<0&&j<0)return 1;
        if(i>=0&&j<0)return 0;
        
        if(i<0&&j>=0)
        {
            for(int ii=j;ii>=0;ii--)if(p[ii]!='*')return false;
            return 1;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        if(p[j]==s[i]||p[j]=='?')return dp[i][j]=func(i-1,j-1,s,p,dp);
        if(p[j]=='*')return dp[i][j]=func(i-1,j,s,p,dp)|func(i,j-1,s,p,dp);
        return dp[i][j]=false;
    }
public:
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(s.size()+1,vector<int>(p.size()+1,-1));
        return func(s.size()-1,p.size()-1,s,p,dp);
    }
};