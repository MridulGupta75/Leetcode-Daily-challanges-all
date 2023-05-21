class Solution {
public:
    int minStartValue(vector<int>& nums) {
        // bool flag=false;
        // if(nums[0]<0)flag=true;
        for(int i=1;i<nums.size();i++)
        {
           
            nums[i]=nums[i]+nums[i-1];
             // if(nums[i]<0)flag=true;
            
        }
        int min=INT_MAX;
        for(auto&x:nums)
            if(x<min)
                min=x;
      if(min<0)
        return abs(min)+1;
        else return 1;
      
            
    }
};