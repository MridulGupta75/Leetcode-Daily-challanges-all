class Solution {
public:
    double func(int a,int b,vector<vector<double>>&dp)
    {
        if(a<=0&&b<=0)return 0.5;
        if(a<=0)return 1.0;
        if(b<=0)return 0;
        if(dp[a][b]!=-1)return dp[a][b];
        double p1=func(a-100,b,dp);
        double p2=func(a-75,b-25,dp);
        double p3=func(a-50,b-50,dp);
        double p4=func(a-25,b-75,dp);
        
        return dp[a][b]=(0.25*(p1+p2+p3+p4));
    }
    double soupServings(int n) {
        if(n>=5000)return 1;
        vector<vector<double>>dp(n+1,vector<double>(n+1,-1));
        return(func(n,n,dp));
    }
};