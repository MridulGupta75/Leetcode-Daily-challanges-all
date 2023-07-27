class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,sol=0,ltmax=0,rtmax=0;
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>=ltmax)ltmax=height[l];
                else sol+=max(ltmax,rtmax)-height[l];
                l++;
            }
            else
            {
                if(height[r]>=rtmax)rtmax=height[r];
                else sol+=max(rtmax,ltmax)-height[r];
                r--;
            }
           
        }
         return sol;
    }
};