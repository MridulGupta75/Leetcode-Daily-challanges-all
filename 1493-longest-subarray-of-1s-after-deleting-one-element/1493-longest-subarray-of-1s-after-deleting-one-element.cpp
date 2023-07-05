class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m=INT_MIN;
        int flag=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                flag=0;
                int c=0;
                for(int j=0;j<nums.size();j++)
                {
                    if(j==i)continue;
                    if(nums[j]==1)c++;
                    else m=max(c,m),c=0;
                    
                }
                m=max(c,m);
            }
        }
        if(flag) return nums.size()-1;
        return m;
    }
};