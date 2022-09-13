class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size=nums.size();
            while(size>1)
            {
                int x=nums.size();
                for(int i=0;i<x-1;i++)
                {
                    int k=nums[i]+nums[i+1];
                    if(k<10)nums[i]=k;
                    else
                    nums[i]=k%10;
                }
                nums.pop_back();
                size--;
            }
        
        return nums[0];
    }
};