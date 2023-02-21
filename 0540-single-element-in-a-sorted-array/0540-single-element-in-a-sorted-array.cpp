class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int ans;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            auto itr=mpp.find(nums[i]);
            if(itr!=mpp.end())itr->second=2;
            else mpp.insert({nums[i],1});
        }
        for(auto itr=mpp.begin();itr!=mpp.end();itr++)
         if(itr->second==1)return(itr->first);
            
        
        return 0;
    }
};