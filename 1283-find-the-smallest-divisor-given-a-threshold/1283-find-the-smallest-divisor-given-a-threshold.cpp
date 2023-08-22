class Solution {
    private:
    int func(int mid,vector<int>&nums)
    {
        int sum=0;
        for(auto&x:nums)
        {
            int k=ceil(x/(mid*1.0));
            sum+=k;
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=*max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(func(mid,nums)<=threshold)
            {
                ans=mid;
                h=mid-1;
            }
            else  l=mid+1;
        }
        return ans;
        
    }
};