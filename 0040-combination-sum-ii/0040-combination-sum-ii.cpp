class Solution {
public:
     
    void func(vector<vector<int>>&sol, vector<int>&subsol,vector<int>&nums,int target,int index)
    {
        //base
        if(target==0)
        {
            sol.push_back(subsol);
            return;
        }
       
        //condditions
        //take
        for(int i=index;i<nums.size();i++)
        {
            if(i>index&&nums[i]==nums[i-1])continue;
            if(nums[i]>target)break;
        subsol.push_back(nums[i]);
        func(sol,subsol,nums,target-nums[i],i+1);
        subsol.pop_back();
        }

    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        
        sort(candidates.begin(),candidates.end()); 
        
        vector<vector<int>>sol;
        vector<int>subsol;
        
        //call recursion function
        func(sol,subsol,candidates,target,0);
        
        return sol;
        
    }
};