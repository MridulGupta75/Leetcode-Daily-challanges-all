class Solution {
public:
    
    int fun(vector<int>&nums,int i,int j)
    {
        if(i==j)return nums[j];
        int choosefirst=nums[i]-fun(nums,i+1,j);
         int chooseleft=nums[j]-fun(nums,i,j-1);
        return max(choosefirst,chooseleft);
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        if(fun(nums,i,j)>=0)return true;
        return false;
        
    }
};