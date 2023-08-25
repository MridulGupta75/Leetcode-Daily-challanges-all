class Solution {
    private:
    int e,e1,e2;
  bool func(int i,int j,int k,string&s1, string&s2, string&s3, vector<vector<vector<int>>>&dp)
  {
     if(i==e&&j==e1&&k==e2)return true;
      if(k>=e2)return false;
      if(dp[i][j][k]!=-1)return dp[i][j][k];
      bool res=0;
      if(s1[i]==s3[k])
          res=func(i+1,j,k+1,s1,s2,s3,dp);
      
      if(res)return dp[i][j][k]=1;
      
      if(s2[j]==s3[k])res=func(i,j+1,k+1,s1,s2,s3,dp);
      
      return dp[i][j][k]=res;
  }
public:
    bool isInterleave(string s1, string s2, string s3) {
        e=s1.size(),e1=s2.size(),e2=s3.size();
        vector<vector<vector<int>>>dp(201,vector<vector<int>>(201,vector<int>(201,-1)));
        return func(0,0,0,s1,s2,s3,dp);
    }
};