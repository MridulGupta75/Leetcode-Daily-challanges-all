class Solution {
public:
    static bool comp(vector<int>&x,vector<int>&y)
    {
        return x[0]<y[0];
    }
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),comp);
        int i=1;
        int n=nums.size();
        int l=0,c=0;
        while(i<n)
        {
          if(nums[l][1]<=nums[i][0])
          l=i;
            else if(nums[l][1]>nums[i][1])
            c++,l=i;
            else if(nums[l][1]<=nums[i][1])
            c++;
            i++;
            
        }
        return c;
    }
};