class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
         vector<vector<int>>sol;
        if(nums.size()<4)return sol;
        // set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1])continue;
           for(int j=i+1;j<nums.size()-2;j++)
           {
               if(j>i+1&&nums[j]==nums[j-1])continue;
               int l=j+1,h=nums.size()-1;
               while(l<h)
               {
                   
                   
                   if((long long)nums[l]+(long long)nums[h]==target-(long long)nums[i]-(long long)nums[j])
                   {
                       sol.push_back({nums[i],nums[j],nums[l],nums[h]});
                       while(l<h&&nums[l+1]==nums[l])l++;
                       while(l<h&&nums[h-1]==nums[h])h--;
                       l++,h--;
                   }
                   else if((long long)nums[l]+(long long)nums[h]<target-(long long)nums[i]-(long long)nums[j])l++;
                   else h--;
               }
           }
            
        }
       
        // for(auto&x:s)
            // sol.push_back(x);
        return sol;
        
    }
};