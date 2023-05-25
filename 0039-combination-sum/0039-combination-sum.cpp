class Solution {
public:
    
    
    void func(int index,vector<int>&subsol,vector<vector<int>>&sol,vector<int>&nums,int target)
    {
        //base
        if(target==0)
        {
            sol.push_back(subsol);
            return;
        }
        if(target<0||index==nums.size())return;
        //conditions
        //take
        subsol.push_back(nums[index]);
        func(index,subsol,sol,nums,target-nums[index]);
        //nottake
        subsol.pop_back();
        func(index+1,subsol,sol,nums,target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>subsol;
        vector<vector<int>>sol;
        func(0,subsol,sol,candidates,target);
        return sol;
    }
};