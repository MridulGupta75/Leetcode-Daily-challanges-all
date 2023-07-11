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
    bool isMatch(string s, string t) {
        int n=s.length(),m=t.length();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1,0));
        dp[0][0]=1;
       // return func(n-1,m-1,s,p,dp);
        for(int j=1;j<=m;j++)
        {
            bool flag =true;
            for(int ii=j;ii>=1;ii--)
           {
               if(t[ii-1]!='*')flag=false;
           }
            if(flag)
            dp[0][j]=true;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==t[j-1]||t[j-1]=='?') dp[i][j]=dp[i-1][j-1];
               if(t[j-1]=='*')  dp[i][j]=dp[i-1][j] | dp[i][j-1];
            }
        }
        return dp[n][m];
        
    }
};