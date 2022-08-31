class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[b]=nums[i];
                b++;
            }
        }
        return b;
    }
};