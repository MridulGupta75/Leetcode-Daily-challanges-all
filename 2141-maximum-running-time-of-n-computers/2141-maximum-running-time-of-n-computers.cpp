class Solution {
public:
    bool possible(vector<int>& batteries,int n,long long mid)
    {
        long long tar=n*mid;
         long long sum=0;
        for(int i=0;i<batteries.size();i++)
        {
           sum+=min((long long)batteries[i],mid);
            if(sum>=tar)
                return true;
            
        }
        return false;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long  l=*min_element(batteries.begin(),batteries.end());
        long long sum=0;
        for(auto&x:batteries)sum+=x;
        long long r=sum/n;
        long long res=0;
        while(l<=r)
        {
            long long mid=l+(r-l)/2;
            if(possible(batteries,n,mid))
            {
                res=mid;
                l=mid+1;
            }
            else
                r=mid-1;
            
        }
        return res;
        
        
    }
};