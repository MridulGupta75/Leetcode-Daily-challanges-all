class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mapro=0;
        int minP=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            minP=min(minP,prices[i]);
            int cost=prices[i]-minP;
            mapro=max(mapro,cost);
            
        }
return mapro;
        
    }
};