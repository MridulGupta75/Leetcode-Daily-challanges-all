class Solution {
    private:
    bool bloom(int mid,vector<int>&bloomDay,int k,int m)
    {
        int c=0;
        int flower=0;
        for(auto&x:bloomDay)
        {
            if(mid>=x)c++;
            else 
            {
                flower+=c/k;
                c=0;
            }
           
        }
         flower+=c/k;
         if(flower>=m)return true;
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size())return -1;
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            // cout<<mid<<" ";
            if(bloom(mid,bloomDay,k,m))
            {
                ans=mid;
                h=mid-1;
            }
            else l=mid+1;
            
        }
        return ans;
        
    }
};