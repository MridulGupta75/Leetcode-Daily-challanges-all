class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin(),time.end());
        long long l=1,u=1e14;
        
        while(l<=u)
        {
           long long mid=l+(u-l)/2;
            long long midtr=0;
            for(auto it:time)
              midtr+=(mid/it);
            if(midtr>=totalTrips) u=mid-1;
            else l=mid+1;
        
        }
        return l;
        
        
    }
};