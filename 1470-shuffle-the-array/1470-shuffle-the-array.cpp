class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int len=nums.size();
        len=len/2;
        for(int i=0,j=len;i<len;j++,i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }
        return ans;
    }
};