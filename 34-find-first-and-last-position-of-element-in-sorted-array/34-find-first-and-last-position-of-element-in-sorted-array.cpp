class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>sol;
        int i=0,j=nums.size()-1;
        if(nums.size()!=0)
        {
        while(i<=j)
        {
            if(target==nums[i])
                break;
            i++;
        }
        while(j>=i)
        {
            if(target==nums[j])
                break;
            j--;
        }
        if(nums[j]!=target)
        i=-1,j=-1;
        }
        else
            i=-1,j=-1;
            sol.push_back(i);
            sol.push_back(j);
     return sol;
            
        
    }
};