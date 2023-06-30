class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pos=-1;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                pos=i-1;
                break;
            }
        }
         if(pos==-1)
        {
            reverse(nums.begin(),nums.end());
             return;
        }
        for(int i=nums.size()-1;i>pos;i--)
        {
            if(nums[i]>nums[pos])
            {
               swap(nums[i],nums[pos]);
                break;
            }
        }
       
    
            int i=pos+1,j=nums.size()-1;
          while(i<j)
            {
                swap(nums[i++],nums[j--]);
            }
        
        
    }
};