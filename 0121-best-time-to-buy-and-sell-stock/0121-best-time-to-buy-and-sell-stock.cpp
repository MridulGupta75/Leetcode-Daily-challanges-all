class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int minprice=prices[0];
        //minnimum nikaloo pitcha ka
        for(int i=0;i<prices.size();i++)
        {
           minprice=min(minprice,prices[i]);
            pro=max(prices[i]-minprice,pro);
        }
        return pro;
        
    }
};