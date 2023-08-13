class Solution {
private:
    int n;
    
    bool func(int index,vector<int>&nums,vector<int>&dp)
    {
        if(index>=n)return true;
        if(dp[index]!=-1)return dp[index];
        bool result = false;
        //rule1 
        if(index+1<n&&nums[index]==nums[index+1]) 
        {
            result |=func(index+2,nums,dp);
        }
        if(result)return dp[index]=true;
        //rule 2
        if(index+2<n&&nums[index]==nums[index+1]&&nums[index+1]==nums[index+2])
            result |=func(index+3,nums,dp);
        
        if(result)return dp[index]=true;
         
        //rule 3
        if(index+2<n&&nums[index+1]-nums[index]==1&&nums[index+2]-nums[index+1]==1) result |=func(index+3,nums,dp);
        
        if(result)return dp[index]=true;
        return dp[index]=false;
        
    }
public:
    bool validPartition(vector<int>& nums) {
        n=nums.size();
        // vector<int>dp(nums.size(),-1);
        // return func(0,nums,dp);
        vector<bool>dp(n+1,0);
        dp[n]=true;
        for(int index=n-1;index>=0;index--)
        {
        bool result = false;
        //rule1 
        if(index+1<n&&nums[index]==nums[index+1]) 
        {
            result |=dp[index+2];
        }
        if(result)
        {
            dp[index]=true;
            continue;
        }
        //rule 2
        if(index+2<n&&nums[index]==nums[index+1]&&nums[index+1]==nums[index+2])
            result |=dp[index+3];
        
        if(result)
        {
            dp[index]=true;
            continue;
        }
         
        //rule 3
        if(index+2<n&&nums[index+1]-nums[index]==1&&nums[index+2]-nums[index+1]==1) 
            result |=dp[index+3];
        
        if(result)
        {
            dp[index]=true;
            continue;
        }
        dp[index]=false;
        }
        return dp[0];
        
        
    }
};