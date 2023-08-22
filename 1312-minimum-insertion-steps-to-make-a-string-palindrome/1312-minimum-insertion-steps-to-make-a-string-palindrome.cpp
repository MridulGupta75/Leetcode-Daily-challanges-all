
//    int func(int i,int j,string&s,string&t,vector<vector<int>>&dp)
//    {
//        if(i<0||j<0)return 0;
//        if(dp[i][j]!=-1)return dp[i][j];
//        if(s[i]==t[j]) return dp[i][j]=1+func(i-1,j-1,s,t,dp);
//        return dp[i][j]=max(func(i-1,j,s,t,dp),func(i,j-1,s,t,dp));
//    }
  class Solution {
public:
    int minInsertions(string text1) {
        int n=text1.length();
        string text2="";
        for(int i=n-1;i>=0;i--)text2.push_back(text1[i]);
        
       vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),0));
        for(int i=0;i<text1.size();i++)
        {
            for(int j=0;j<text2.size();j++)
            {
                if(i==0||j==0)
                {
                    if(text1[i]==text2[j]) dp[i][j]=1;
                    else
                    {
                        if(i==0&&j!=0) dp[i][j]=dp[i][j-1];
                        else if(i!=0&&j==0) dp[i][j]=dp[i-1][j];
                    }
                }
                else
                {
                if(text1[i]==text2[j]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n-dp[text1.size()-1][text2.size()-1];
    }
};
