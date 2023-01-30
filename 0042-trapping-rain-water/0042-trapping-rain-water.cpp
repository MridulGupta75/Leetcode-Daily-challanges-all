class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int n=height.size();
        int maxl[n],maxr[n];
        maxl[0]=height[0];
        maxr[n-1]=height[n-1];
        for(int i=1;i<n;i++)
            maxl[i]=max(height[i],maxl[i-1]);
         for(int i=n-2;i>=0;i--)
            maxr[i]=max(height[i],maxr[i+1]);
        for(int i=0;i<n;i++)
            res=res+(min(maxl[i],maxr[i])-height[i]);
        return res;
        
    }
};