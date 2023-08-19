class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();
        if(0==n-1)return nums[0]; 
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        int l=1,h=n-2;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1])return nums[mid];
            else if(mid%2==1&&nums[mid+1]==nums[mid]||mid%2==0&&nums[mid]==nums[mid-1])h=mid-1;
            else l=mid+1;
            
        }
        return 0;
        
    }
};