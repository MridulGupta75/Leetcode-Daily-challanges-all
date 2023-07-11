class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,pos=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            p=max(prices[i]-pos,p);
             pos=min(pos,prices[i]);
        }
        return p;
    }
};