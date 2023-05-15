class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pos=0,flag=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]<nums[i])
            {
             pos=i-1;
             break;
            }
        }
         for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[pos])
            {
                swap(nums[i],nums[pos]);
                flag=1;
                break;
            }
        }
        int i=pos+1;
        if(pos==0&&flag==0)
        {
            i=pos;
        }
        int j=nums.size()-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++,j--;
        }
        
    }
};