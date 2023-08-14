class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size())
        {
            if(nums[j]!=0&&nums[i]==0)
            {
                swap(nums[i],nums[j]);
                while(i<j&&nums[i]!=0)i++;
            }
            else
            {
                if(nums[i]!=0)i=j;
            }
            j++;
          
        }
        
    }
};