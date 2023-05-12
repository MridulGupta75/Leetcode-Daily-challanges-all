class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pos=0,flag=0;
        for(int i=nums.size()-1;i>=1;i--)
        {
            if(nums[i-1]<nums[i])
            {
                pos=i-1;
                flag=1;
                break;
            }
        }
    
         for(int i=nums.size()-1;i>=0;i--)
        {
          if(nums[i]>nums[pos])
          {
              swap(nums[i],nums[pos]);
              break;
          }
              
        }
        //  if(flag==1)
        // pos++;
        // reverse(nums.begin()+pos,nums.end());
        
        int j=nums.size()-1;
        if(flag==1)
        pos++;
        while(pos<j)
        {
            swap(nums[pos],nums[j]);
            pos++;
            j--;
        }
        
    }
};



    