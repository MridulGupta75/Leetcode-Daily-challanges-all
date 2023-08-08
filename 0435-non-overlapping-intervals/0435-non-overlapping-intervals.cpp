class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,c=0;
        for(auto&x:nums)cout<<x[0]<<" "<<x[1]<<endl;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i][0]<nums[l][1])
            {
                c++;
                l=nums[i][1]<nums[l][1]?i:l;
            }
            else
                l=i;
            
        }
        return c;
    }
};