class Solution {
public:
    
    void func(vector<int>& nums,vector<vector<int>>&sol,vector<int>& subsol,vector<bool>&mpp)
    {
        
        if(subsol.size()==nums.size())
        {
            sol.push_back(subsol);
            return;
        }
        
            for(int i=0;i<nums.size();i++)
            {
                if(mpp[i])continue;
                subsol.push_back(nums[i]);
                mpp[i]=true;
                func(nums,sol,subsol,mpp);
                mpp[i]=false;
                subsol.pop_back();
                
            }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        vector<bool>mpp(nums.size(),false);
        vector<int>subsol;
        vector<vector<int>>sol;
        
        func(nums,sol,subsol,mpp);
        return sol;
        
    }
};