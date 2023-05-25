class Solution {
public:
    void func( set<vector<int>>&sol,vector<int>&subsol,vector<int>&nums,int ind)
    {
        if(ind==nums.size())
        {
            sol.insert(subsol);
            return;
        }
        
        //conditions
        //take
        subsol.push_back(nums[ind]);
        func(sol,subsol,nums,ind+1);
        subsol.pop_back();
        func(sol,subsol,nums,ind+1);
        
        //not take
        
        
        
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        set<vector<int>>sol;
        vector<int>subsol;
        sort(nums.begin(),nums.end());
        func(sol,subsol,nums,0);
        vector<vector<int>>realsol;
        for(auto&x:sol)
            realsol.push_back(x);
        
        return realsol;
        
    }
};