class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            auto itr=mpp.find(target-nums[i]);
            if(itr!=mpp.end())
             return{i,itr->second};
            else
                mpp[nums[i]]=i;
        }
         return{0};
    }
};