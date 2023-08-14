class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pos=-1;
                       //     4
// need this pos of 2 //  3       2(kam)
                      // 1         5(jada)
        for(int i=nums.size()-1;i>=1;i--)
        if(nums[i]>nums[i-1])
        {
            pos=i-1;
            break;
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
        reverse(nums.begin()+pos+1,nums.end());
        
        
    }
};