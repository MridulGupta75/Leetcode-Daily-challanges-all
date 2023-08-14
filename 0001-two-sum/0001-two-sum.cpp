class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
                return {mpp[target-nums[i]],i};
            else mpp.insert({nums[i],i});
        }
        return {};
    }
};