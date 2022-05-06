class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                v.push_back(mpp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            mpp[nums[i]]=i;
            
        }
        return v;
        
    }
};