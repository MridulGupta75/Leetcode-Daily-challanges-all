class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>rtmax(n,0);
        vector<int>ltmax(n,0);
         ltmax[0]=(height[0]);
        for(int i=1;i<n;i++)
            ltmax[i]=(max(ltmax[i-1],height[i]));
        
        rtmax[n-1]=height[n-1];
        
         for(int i=n-2;i>=0;i--)
           rtmax[i]=max(rtmax[i+1],height[i]);
        
        int sol=0;
        for(int i=1;i<n-1;i++)
        {
            sol+=(min(rtmax[i],ltmax[i])-height[i])*1;
        }
            return sol;
        
    }
};