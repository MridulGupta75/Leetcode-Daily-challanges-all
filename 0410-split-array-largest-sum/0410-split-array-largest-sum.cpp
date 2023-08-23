class Solution {
    private:
    bool allocate(int mid,vector<int>&nums,int m)
{
    int stu_count=1;
    int sum=0;
    for(auto&x:nums)
    {
       sum+=x;
       if(sum>mid)
       {
           sum=x;
           stu_count++;
       }
       if(stu_count>m)return false;
    }
    
    return true;

}
public:
    int splitArray(vector<int>& arr, int m) {
   int l=*max_element(arr.begin(),arr.end());
   int h=INT_MAX;
   if(m>arr.size())return -1;
   int ans=-1;
   while(l<=h)
   {
       int mid=l+(h-l)/2;
       if(allocate(mid,arr,m))
       {
           ans=mid;
           h=mid-1;
       }
       else l=mid+1;
   }
   return ans;
    }
};