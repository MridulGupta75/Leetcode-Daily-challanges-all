class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=1,r=1e7;
        int mini=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            double sum=0.0;
            for(int i=0;i<dist.size()-1;i++)
            {
                sum+=ceil((double)dist[i]/(double)mid);
            }
            sum+=(((double)dist[dist.size()-1])/(double)mid);
           
            if(sum<=hour)
            {
                mini=mid;
                r=mid-1;
            }
            else
                l=mid+1;
            
            
        }
        return mini;
    }
};