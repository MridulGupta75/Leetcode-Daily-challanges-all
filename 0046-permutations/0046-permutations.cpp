class Solution {
public:
    
    void func(vector<int>& nums,vector<vector<int>>&sol,vector<int>& subsol,int ind)
    {
        
        if(ind==nums.size())
        {
            sol.push_back(nums);
            return;
        }
        
            for(int i=ind;i<nums.size();i++)
            {
                // if(mpp[i])continue;
        
                swap(nums[i],nums[ind]);
                // subsol.push_back(nums[i]);
                // mpp[i]=true;
                func(nums,sol,subsol,ind+1);
                  swap(nums[i],nums[ind]);
                // mpp[i]=false;
                // subsol.pop_back();
                
            }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        vector<int>subsol;
        vector<vector<int>>sol;
        
        func(nums,sol,subsol,0);
        return sol;
        
    }
};