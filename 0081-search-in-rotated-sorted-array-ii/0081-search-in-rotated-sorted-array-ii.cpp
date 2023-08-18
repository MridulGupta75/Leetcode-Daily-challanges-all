class Solution {
    private:
    bool binarySearch(vector<int>&nums,int&target,int l,int r)
    {
        while(l<=r)
        {
             int mid=l+(r-l)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>target)r=mid-1;
            else l=mid+1;
        }
        return false;
    }
public:
    bool search(vector<int>& nums, int target) {
        // int l=0,r=nums.size()-1;
        // while(l<r)
        // {
        //     while(l<r&&nums[l]==nums[l+1])l++;
        //     while(l<r&&nums[r]==nums[r-1])r--;
        //      int mid=l+(r-l)/2;
        //      if(nums[mid]>nums[r])l=mid+1;
        //      else r=mid;
        // }
        // return(binarySearch(nums,target,0,l-1)|binarySearch(nums,target,l,nums.size()-1));
         int l=0,h=nums.size()-1;
        
        while(l<=h)
        {
            while(l+1<=h&&nums[l]==nums[l+1])l++;
            while(l+1<=h&&nums[h]==nums[h-1])h--;
            int mid=l+(h-l)/2;
            if(nums[mid]==target)return true;
            //left is sorted
            if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target&&nums[mid]>=target)h=mid;
                else l=mid+1;
            }
            else
            {
                //right is sorted
                if(nums[mid]<=target&&nums[h]>=target)l=mid;
                else h=mid-1;
            }
        }
        return false;
    }
};