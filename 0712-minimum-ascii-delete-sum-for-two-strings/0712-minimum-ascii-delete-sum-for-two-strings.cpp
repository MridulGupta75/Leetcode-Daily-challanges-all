class Solution {
public:
    int func(int ind1,int ind2,string&s1,string&s2, vector<vector<int>>&dp)
    {
        if(ind1<0&&ind2>=0)return s2[ind2]+func(ind1,ind2-1,s1,s2,dp);
        if(ind1>=0&&ind2<0)return s1[ind1]+func(ind1-1,ind2,s1,s2,dp);
        if(ind1<0&&ind2<0)return 0;
        if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2])return func(ind1-1,ind2-1,s1,s2,dp);
        // cout<<(int)s1[ind1]<<" "<<(int)s2[ind2]<<endl;
        return dp[ind1][ind2]=min(s1[ind1]+func(ind1-1,ind2,s1,s2,dp),s2[ind2]+func(ind1,ind2-1,s1,s2,dp));
        
    }
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
        return func(s1.length()-1,s2.length()-1,s1,s2,dp);
    }
};