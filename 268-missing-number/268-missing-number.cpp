class Solution {
public:
    // int missingNumber(vector<int>& nums) {
    //     int n=nums.size();
    //    string z="positive";
    //     for(int i=0;i<n;i++)
    //     {
    //         if(abs(nums[i])==n)continue;
    //         else
    //         {
    //             if( nums[abs(nums[i])]!=0)
    //             nums[abs(nums[i])]*=-1;
    //             else z="negative";
    //         }
    //     }
    //      for(int i=0;i<n;i++)
    //      {
    //         if(nums[i]>=0)
    //         if(nums[i]==0&&z=="positive"||(nums[i]!=0))n=i;
    //      }
    //     return n;
    //}
    
    
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++)
            s+=nums[i];
        n=n*(n+1)/2-s;
       return n;
    }
    
    
    
};