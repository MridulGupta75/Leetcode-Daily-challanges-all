class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
    int sum=0;
        if(n==2)return min(nums[0],nums[1]);
         for(int i=n-2;i>=0;i=i-2)
         {
             // if(nums[i]<0)break;
             sum+=nums[i];
             
         }
     return sum;
    }
};