class Solution {
    private:
    int func(int mid,vector<int>&nums)
    {
        int c=1;
        int sum=0;
        for(auto&x:nums)
        {
            // if(mid<x)return -1;
            sum+=x;
            if(sum>mid)
            {
                sum=x;
                c++;
            }
        }
        return c;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end()),h=INT_MAX;
        int ans=INT_MAX;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(func(mid,weights)<=days)
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
        
    }
};