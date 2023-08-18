class Solution {
    private:
    int bs(vector<int>& nums,int l,int r,int target)
    {
        while(l<=r)
        {
        int mid=l+(r-l)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)l=mid+1;
        else r=mid-1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        // int l=0,r=nums.size()-1;
        // while(l<r)
        // {
        //     int mid=l+(r-l)/2;
        //     if(nums[mid]>nums[r])l=mid+1;
        //     else r=mid;
        // }
        // int ind1=bs(nums,0,l-1,target);
        // int ind2=bs(nums,l,nums.size()-1,target);
        // return ind1==-1?ind2:ind1;
        
        
        //striver
        int l=0,h=nums.size()-1;
        
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]==target)return mid;
            //left is sorted
            if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target&&nums[mid]>=target)h=mid;
                else l=mid+1;
            }
            else
            {
                if(nums[mid]<=target&&nums[h]>=target)l=mid;
                else h=mid-1;
            }
        }
        return -1;
        
    }
};