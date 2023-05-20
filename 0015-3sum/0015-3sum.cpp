class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>s;
         vector<vector<int>>sol;
         sort(nums.begin(),nums.end());                                       
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0||(i>0&&nums[i]!=nums[i-1]))
            {
            int l=i+1;
            int h=nums.size()-1;
            while(l<h)
            {
            if(nums[i]+nums[l]+nums[h]==0)
            {
                sol.push_back({nums[i],nums[l],nums[h]}); 
                while(l<h&&nums[l+1]==nums[l])l++;
                 while(l<h&&nums[h-1]==nums[h])h--;
                l++,h--;
            }
            else if(nums[l]+nums[h]<-1*nums[i]) l++;
            else h--;
            }
            }
        }
       
        // for(auto&x:s) sol.push_back(x);
            return sol;
        
    }
};