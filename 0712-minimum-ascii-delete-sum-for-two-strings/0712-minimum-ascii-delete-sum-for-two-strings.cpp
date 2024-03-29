class Solution {
public:
    int func(int ind1,int ind2,string&s1,string&s2, vector<vector<int>>&dp)
    {
        if(ind1==0&&ind2>0)return s2[ind2-1]+func(ind1,ind2-1,s1,s2,dp);
        if(ind1>0&&ind2==0)return s1[ind1-1]+func(ind1-1,ind2,s1,s2,dp);
        if(ind1==0&&ind2==0)return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(s1[ind1-1]==s2[ind2-1])return func(ind1-1,ind2-1,s1,s2,dp);
        // cout<<(int)s1[ind1]<<" "<<(int)s2[ind2]<<endl;
        return dp[ind1][ind2]=min(s1[ind1-1]+func(ind1-1,ind2,s1,s2,dp),s2[ind2-1]+func(ind1,ind2-1,s1,s2,dp));
        
    }
    int minimumDeleteSum(string s1, string s2) {
        // vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,-1));
          vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,0));
        // return func(s1.length(),s2.length(),s1,s2,dp);
         for(int i=1;i<=s2.length();i++) dp[0][i]=s2[i-1]+dp[0][i-1];
         for(int i=1;i<=s1.length();i++) dp[i][0]=s1[i-1]+dp[i-1][0];
           for(int ind1=1;ind1<=s1.length();ind1++)
           {
               for(int ind2=1;ind2<=s2.length();ind2++)
               {
                    if(s1[ind1-1]==s2[ind2-1])dp[ind1][ind2]=dp[ind1-1][ind2-1];
                   else
                    dp[ind1][ind2]=min(s1[ind1-1]+dp[ind1-1][ind2],s2[ind2-1]+dp[ind1][ind2-1]);
               }
           }
        return dp[s1.length()][s2.length()];
    }
    
    
      
                
        
      
};