class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0],l=0,h=nums.size()-1;
        //O(log n)
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[l]<=nums[mid])
            {
                ans=min(nums[l],ans);
                l=mid+1;
            }
            else
            {
                ans=min(nums[mid],ans);
                h=mid-1;
            }
        }
        return ans;
        
    }
};