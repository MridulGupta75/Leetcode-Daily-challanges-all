class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>lt(n,1);
        for(int i=1;i<n;i++)
        if(ratings[i]>ratings[i-1])lt[i]=lt[i-1]+1;
        int right=1;
         for(int i=n-2;i>=0;i--)
        if(ratings[i]>ratings[i+1])right++,lt[i]=max(lt[i],right);
        else right=1;
        int sum=0;
        for(auto&x:lt)sum+=x;
          
        return sum;
        
        
        
    }
};