class Solution {
public:
    vector<pair<int,int>>par={{100,0},{75,25},{50,50},{25,75}};
    double func(int a,int b,vector<vector<double>>&dp)
    {
        if(a<=0&&b<=0)return 0.5;
        if(a<=0)return 1.0;
        if(b<=0)return 0;
        if(dp[a][b]!=-1)return dp[a][b];
        double prob=0.0;
        for(auto&x:par) prob+=func(a-x.first,b-x.second,dp);   
        return dp[a][b]=(0.25*prob);
    }
    double soupServings(int n) {
        if(n>=4000)return 1;
        vector<vector<double>>dp(n+1,vector<double>(n+1,-1));
        return(func(n,n,dp));
    }
};