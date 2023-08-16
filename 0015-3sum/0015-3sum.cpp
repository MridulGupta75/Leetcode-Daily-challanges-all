class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>sol;
        for(int f=0;f<=nums.size()-3;f++)
        {
            int i=f+1,j=nums.size()-1;
            while(i<j)
            {
                long long k=nums[f]+nums[i];
                 if(k==-1*nums[j])
                {
                    sol.push_back({nums[f],nums[i],nums[j]});
                      while(i<j&&nums[i]==nums[i+1])i++;
                      while(i<j&&nums[j]==nums[j-1])j--;
                     i++,j--;
                }
                else if(k<-1*nums[j])
                {
                    while(i<j&&nums[i]==nums[i+1])i++;
                    i++;
                }
                else 
                {
                    while(i<j&&nums[j]==nums[j-1])j--;
                    j--;
                }
            }
            while(f<=nums.size()-3&&nums[f]==nums[f+1])f++;
            
        }
        return sol;
        
    }
};