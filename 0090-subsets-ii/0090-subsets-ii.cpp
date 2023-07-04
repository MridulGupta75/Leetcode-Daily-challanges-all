class Solution {
public:
    void findSub(vector<int>&nums,vector<int>&subsol,vector<vector<int>>&sol,int index)
    {
        sol.push_back(subsol);
        
        for(int i=index;i<nums.size();i++)
        {
            if(i!=index&&(nums[i]==nums[i-1]))continue;
            subsol.push_back(nums[i]);
            findSub(nums,subsol,sol,i+1);
            subsol.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>subsol;
        vector<vector<int>>sol;
        findSub(nums,subsol,sol,0);
        return sol;
        
    }
};