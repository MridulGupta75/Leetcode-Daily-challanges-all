class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        int ans;
        while(l<=h)
        {
            long long mid=l+(h-l)/2;
            long long mul=mid*mid;
            if(mul==x){
                ans=mid;
                break;
            }
            else if(mul<x)
            l=mid+1;
            else
                  h=mid-1;
        }
        return ans;
    }
};

