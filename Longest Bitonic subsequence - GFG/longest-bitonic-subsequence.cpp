//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    void LIS(vector<int>&nums,vector<int>&dp)
    {
        
        for(int i=1;i<nums.size();i++)
           for(int j=0;j<i;j++)
            if(nums[j]<nums[i]&&dp[j]+1>dp[i])dp[i]=dp[j]+1;
    }
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    vector<int>dp(nums.size(),1);
	  LIS(nums,dp);
	  vector<int>dp1(nums.size(),1);
	  reverse(nums.begin(),nums.end());
	  LIS(nums,dp1);
	  reverse(dp1.begin(),dp1.end());
	  int sol=1;
	  for(int i=0;i<nums.size();i++)
	  sol=max(dp[i]+dp1[i]-1,sol);
	  return sol;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends