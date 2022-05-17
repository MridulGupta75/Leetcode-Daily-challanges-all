class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(nums[i])!=mpp.end())return true;
            else
            {
                mpp[nums[i]]=true;
            }
        }
        return false;
    }
};