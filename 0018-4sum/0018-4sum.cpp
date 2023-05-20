class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {\
         vector<vector<int>>sol;
        if(nums.size()<4)return sol;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
           for(int j=i+1;j<nums.size()-2;j++)
           {
               int l=j+1,h=nums.size()-1;
               while(l<h)
               {
                   
                   
                   if((long long)nums[l]+(long long)nums[h]==target-(long long)nums[i]-(long long)nums[j])
                   {
                       s.insert({nums[i],nums[j],nums[l],nums[h]});
                       l++,h--;
                   }
                   else if((long long)nums[l]+(long long)nums[h]<target-(long long)nums[i]-(long long)nums[j])l++;
                   else h--;
               }
           }
            
        }
       
        for(auto&x:s)
            sol.push_back(x);
        return sol;
        
    }
};