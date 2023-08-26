class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxipro=0,miniprice=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            maxipro=max(maxipro,prices[i]-miniprice);
            miniprice=min(miniprice,prices[i]);
        }
        return maxipro;
    }
};