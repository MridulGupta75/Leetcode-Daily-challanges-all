class Solution {
private:
    bool isValid(vector<int>&nums,int mid,int p)
    {
        int i=0,n=nums.size(),c=0;
        while(i<n-1)
        {
            if(nums[i+1]-nums[i]<=mid)c++,i+=2;
            else i++;
        }
        return c>=p;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int res=INT_MAX;
        int l=0,r=nums[n-1]-nums[0];
        while(l<=r)
        {
            int mid=l+((r-l)/2);
            if(isValid(nums,mid,p)) res=mid,r=mid-1;
            else l=mid+1;
        }
        return res;
    }
};