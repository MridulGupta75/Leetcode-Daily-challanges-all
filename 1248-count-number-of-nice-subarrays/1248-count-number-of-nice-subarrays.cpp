class Solution {
public:
      int func(int goal,vector<int>&nums)
    {
         int l=0,r=0,sol=0;
          while(r<nums.size())
        {
            if(nums[r]==1)goal--;
             if(goal<0)
            {
                while(nums[l]!=1)l++;
                goal++;
                l++;
            }
            
          sol+=r-l+1;
        r++;
        }
        return sol;
    }
    
    int numberOfSubarrays(vector<int>& nums, int goal) {
        
        for(int i=0;i<nums.size();i++)if(nums[i]%2)nums[i]=1;
        else nums[i]=0;
        
         int x=func(goal,nums);
        int y=0;
        if(goal!=0) y=func(goal-1,nums);
        return x-y;
    }
};