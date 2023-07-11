class Solution {
public:
    bool func(int i,int j,string&s,string&t,vector<vector<int>>&dp)
    {
        if(i<0&&j<0)return true;
        if(j<0&&i>=0)return false;
       else if(i<0&&j>=0)
       {
           for(int ii=j;ii>=0;ii--)
           {
               if(t[ii]!='*')return false;
           }
           return true;
       }
         if(dp[i][j]!=-1)return dp[i][j];
        if(s[i]==t[j]||t[j]=='?') return dp[i][j]=func(i-1,j-1,s,t,dp);
        if(t[j]=='*') return dp[i][j]=func(i-1,j,s,t,dp)|func(i,j-1,s,t,dp);
      return false;
    }
    bool isMatch(string s, string p) {
        int n=s.length(),m=p.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
       return func(n-1,m-1,s,p,dp);
    }
};