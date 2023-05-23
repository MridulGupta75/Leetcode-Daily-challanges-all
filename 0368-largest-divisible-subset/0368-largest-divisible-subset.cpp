class Solution {
public:
    

    vector<int> largestDivisibleSubset(vector<int>& nums) {
       
        vector<int>dp(nums.size(),1);
        vector<int>sol{0};
        vector<int>temp;
        int maxi=1;
        int pos=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            sol.push_back(i);
            for(int j=0;j<i;j++)
            {
                if((nums[i]%nums[j]==0)||(nums[j]%nums[i]==0))
                {
                    if(dp[i]<(dp[j]+1))
                    {
                        dp[i]=dp[j]+1;
                        sol[i]=j;
                    }
                }
            }
            if(dp[i]>maxi)
            {
                maxi=dp[i];
                pos=i;
            }
            
        }
        
        
        temp.push_back(nums[pos]);
        while(sol[pos]!=pos)
        {
            pos=sol[pos];
             temp.push_back(nums[pos]);
        }
        reverse(temp.begin(),temp.end());
        return temp;
            
            
            
       
        
    }
};