class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_final=INT_MIN,curr=0;
        for(int i=0;i<nums.size();i++)
        {
            curr+=nums[i];
              max_final=max(curr,max_final);
            if(curr<0)curr=0;
        }
        return max_final;
        
    }
};