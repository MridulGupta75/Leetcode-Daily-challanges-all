class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>output;
        int prefix=1;
      for(int i=0;i<nums.size();i++)
      {
         output.push_back(prefix);
          prefix*=nums[i];
       }
        int postfix=1;
        for(int i=output.size()-1;i>=0;i--)
        {
            if(i!=output.size()-1)
             output[i]=postfix*output[i];
                postfix*=nums[i];
        }
        return output;
    }
};