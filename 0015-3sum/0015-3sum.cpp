class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
         sort(nums.begin(),nums.end());                                       
        for(int i=0;i<nums.size()-2;i++)
        {
            int l=i+1;
            int h=nums.size()-1;
            while(l<h)
            {
            if(nums[i]+nums[l]+nums[h]==0)
            {
                s.insert({nums[i],nums[l],nums[h]});  
                l++,h--;
            }
            else if(nums[l]+nums[h]<-1*nums[i])
            {
                l++;
            }
            else h--;
            }
        }
        vector<vector<int>>sol;
        for(auto&x:s)
        {
          sol.push_back(x);
        }
            return sol;
        
    }
};