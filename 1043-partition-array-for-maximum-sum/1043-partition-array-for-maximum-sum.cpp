class Solution {
public:
    int func(int i,int k,int n,vector<int>& arr, vector<int>&dp)
    {
        if(i==n)return 0;
        if(dp[i]!=-1)return dp[i];
        int maxii=INT_MIN;
       for(int j=i;j<n;j++)
       {
           if(j-i+1<=k)
           {
               int maxi=-1;
               for(int l=i;l<=j;l++)
               maxi=max(maxi,arr[l]);
               int sum=maxi*(j-i+1)+func(j+1,k,n,arr,dp);
               maxii=max(sum,maxii);
           }
           else
           break;
       }
        return dp[i]=maxii;
        
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        // vector<int>dp(arr.size(),-1);
        // return func(0,k,arr.size(),arr,dp);
        int n=arr.size();
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
        int maxii=INT_MIN;
       for(int j=i;j<n;j++)
       {
           if(j-i+1<=k)
           {
               int maxi=-1;
               for(int l=i;l<=j;l++)
               maxi=max(maxi,arr[l]);
               int sum=maxi*(j-i+1)+dp[j+1];
               maxii=max(sum,maxii);
           }
           else
           break;
       }
        dp[i]=maxii;
        }
        return dp[0];
    }
};