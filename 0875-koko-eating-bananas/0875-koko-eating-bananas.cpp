class Solution {
    private:
    bool eat(int k,vector<int>&piles,int h)
    {
        int c=0;
        for(auto&x:piles)
        {
            if(x!=k)
            {
                int d=x/k;
                if(x%k!=0)c+=d+1;
                else c+=d;
                
            }
            else c++;

             if(c>h)return false;
            
        }
        return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int high=INT_MAX;
        int min;
        while(l<=high)
        {
            int mid=l+(high-l)/2;
            if(eat(mid,piles,h))
            {
                min=mid;
                high=mid-1;
            }
            else l=mid+1;
        }
        return min;
        
    }
};