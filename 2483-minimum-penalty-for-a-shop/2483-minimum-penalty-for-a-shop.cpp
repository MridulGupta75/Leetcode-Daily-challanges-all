class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>dp(n+1);
       int y=0,no=0;
        
        for(auto&x:customers)
            if(x=='Y')y++;
            else no++;
        
        map<int,pair<int,int>>mpp;
        for(int i=0;i<=customers.size();i++)
        {
            mpp[i]={y,no};
            if(customers[i]=='Y')y--;
            else no--;
        }
        no=0;
        for(int i=0;i<=customers.size();i++)
        {
            dp[i]=mpp[i].first+no;
             if(customers[i]=='N')no++;
        }
        int mini=dp[0],pos=0;
        for(int i=1;i<=customers.size();i++)
        {
            if(dp[i]<mini)
            {
                mini=dp[i];
                pos=i;
            }
        }
        
        
        return pos;
        
        
        
    }
};