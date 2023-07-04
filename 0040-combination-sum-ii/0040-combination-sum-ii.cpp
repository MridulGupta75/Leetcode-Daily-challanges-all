class Solution {
public:
    void makeSum(vector<int>& nums, int target,vector<int>&subsol,vector<vector<int>>&sol,int index)
    {
        if(target==0)
        {
            sol.push_back(subsol);
            return;
        }
      for(int i=index;i<nums.size();i++)
      {
          if(index!=i&&nums[i]==nums[i-1])continue;
          if(target-nums[i]<0)break;
          subsol.push_back(nums[i]);
          makeSum(nums,target-nums[i],subsol,sol,i+1);
          subsol.pop_back();
      }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<int>subsol;
        vector<vector<int>>sol;
        sort(candidates.begin(),candidates.end());
        makeSum(candidates,target,subsol,sol,0);
        return sol;
    }
};