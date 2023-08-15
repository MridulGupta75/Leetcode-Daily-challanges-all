class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<long long,int>mpp;
       mpp[0]=1;
        int c=0;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            long long rem=sum-k;
            c+=mpp[rem];
            mpp[sum]+=1;
        }
        return c;
        
        
    }
};