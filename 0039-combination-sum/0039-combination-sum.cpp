class Solution {
public:
    void makeSum(vector<int>& nums, int target,vector<int>&subsol,vector<vector<int>>&sol,int i)
    {
        if(target==0)
        {
            sol.push_back(subsol);
            return;
        }
        if(target<0||i==nums.size())return;
        subsol.push_back(nums[i]);
        makeSum(nums,target-nums[i],subsol,sol,i);
        subsol.pop_back();
        makeSum(nums,target,subsol,sol,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>subsol;
        // sort(candidates.begin(),candidates.end());
        vector<vector<int>>sol;
        makeSum(candidates,target,subsol,sol,0);
        return sol;
    }
};