class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit=0,minValue=prices[0];
        for(int i=1;i<prices.length;i++)
        {
            int profit=prices[i]-minValue;
            maxProfit=Math.max(maxProfit,profit);
            minValue=Math.min(minValue,prices[i]);
        }
        return maxProfit;
        
    }
}