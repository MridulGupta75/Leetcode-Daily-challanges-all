class Solution {
public:
    void lis(vector<int>& arr,vector<int>&dp,int n)
{ 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j]&&dp[i]<dp[j]+1)
			dp[i]=dp[j]+1;
		}
	}

}
int longestBitonicSequence(vector<int>& arr, int n) {
	vector<int>dp(n,1),dp1(n,1);
	lis(arr,dp,n);
	reverse(arr.begin(),arr.end());
	lis(arr,dp1,n);
	reverse(dp1.begin(),dp1.end());
	// for(auto&x:dp)cout<<x<<" ";
	// cout<<endl;
	// for(auto&x:dp1)cout<<x<<" ";
	// cout<<endl;
	int ans=1;
	for(int i=0;i<n;i++)
	{
	   // if((dp[i]+dp1[i]-1)>ans)
	   // ans=dp[i]+dp1[i]-1;
         if(dp[i] > 1 && dp1[i] > 1)
                if((dp[i]+dp1[i]-1)>ans)
	   ans=dp[i]+dp1[i]-1;
	}
	  return n-ans;	   
} 
    
    int minimumMountainRemovals(vector<int>& nums) {
        return longestBitonicSequence(nums,nums.size());
    }
};