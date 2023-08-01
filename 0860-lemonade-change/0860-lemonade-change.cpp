class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int>dp(3,0);
        if(bills[0]>5)return false;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)dp[0]++;
            
            else if(bills[i]==10)
            {
                if(dp[0]>=1)dp[0]--;
                else return false;
                dp[1]++;
            }
            else
            {
                if((dp[1]>=1&&dp[0]>=1))dp[0]--,dp[1]--;
                else if((dp[0]>=3))dp[0]-=3; 
                else return false;
                dp[2]++;
            }
        }
        return true;
    }
};