class Solution {
public:
    int minStartValue(vector<int>& nums) {
       
        for(int i=1;i<nums.size();i++)
        nums[i]=nums[i]+nums[i-1];
        int min=INT_MAX;
        
        for(auto&x:nums)
            if(x<min) min=x;
        
     
      return ( (min<0)? abs(min)+1:1);
      
            
    }
};