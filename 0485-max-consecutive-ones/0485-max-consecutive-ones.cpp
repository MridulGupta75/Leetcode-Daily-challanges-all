class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,curr=0;
        for(auto&x:nums)
           if(x==1)curr++;
            else maxi=max(curr,maxi),curr=0;
        
           maxi=max(curr,maxi);
        
            
        return maxi;
    }
};