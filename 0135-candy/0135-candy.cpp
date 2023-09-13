class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>lt(n,1);
        vector<int>rt(n,1);
        for(int i=1;i<n;i++)
        if(ratings[i]>ratings[i-1])lt[i]=lt[i-1]+1;
         for(int i=n-2;i>=0;i--)
        if(ratings[i]>ratings[i+1])rt[i]=rt[i+1]+1;
        int sum=0;
          for(int i=0;i<n;i++)
          sum+=max(lt[i],rt[i]);
          
        return sum;
        
        
        
    }
};