class Solution {
public:
bool func(int i,int k,vector<int> &arr,vector<vector<int>>&dp)
{
    if(k==0)return true;
    if(i==0)return (arr[0]==k);
    if(dp[i][k]!=-1)return dp[i][k];
    bool t=false;
    if(arr[i]<=k)
     t=func(i-1,k-arr[i],arr,dp);
    bool nt=func(i-1,k,arr,dp);
    return (dp[i][k]=(t | nt));
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto&x:nums)
            sum+=x;
        if(sum%2)return false;
        vector<vector<int>>dp(nums.size(),vector<int>((sum/2)+1,-1));
        return func(nums.size()-1,sum/2,nums,dp);
    }
};