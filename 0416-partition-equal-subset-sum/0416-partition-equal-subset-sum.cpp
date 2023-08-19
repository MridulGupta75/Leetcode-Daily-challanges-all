class Solution {
public:
    bool func(int idx,int target,vector<int>&arr,vector<vector<int>>&dp)
{
    // if(target<0)return false;
    if(target==0)return true;
    if(idx==0)return arr[0]==target;
    if(dp[idx][target]!=-1)return dp[idx][target];
    //taking
    bool taking=false;
    if(arr[idx]<=target)
    taking=func(idx-1,target-arr[idx],arr,dp);
    return dp[idx][target]=taking|func(idx-1,target,arr,dp);
}
    
    bool canPartition(vector<int>& nums) {
        
           int sum=0;
         for(auto&x:nums)sum+=x;
        if(sum%2)return false;
        int k=sum/2;
            vector<vector<int>>dp(nums.size(),vector<int>(k+1,-1));
            return func(nums.size()-1,k,nums,dp);
    }
};