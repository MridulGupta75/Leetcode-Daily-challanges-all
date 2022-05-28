class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int z=0;
        for(int i=0;i<n;i++)
        {
            if(abs(nums[i])==n)continue;
            else
            {
                if( nums[abs(nums[i])]!=0)
                nums[abs(nums[i])]*=-1;
                else z=1;
            }
        }
         for(int i=0;i<n;i++)
         {
            if(nums[i]>=0)
            {
                if(nums[i]==0&&z==0)n=i;
                else if(nums[i]!=0)n=i;
                else continue;
            }
         }
        return n;
    }
};