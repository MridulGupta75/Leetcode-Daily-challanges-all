class Solution {
public:
    int arraySign(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int c=0;
        while(i<=j)
        {
            if(i==j)
            {
                if(nums[i]==0)return 0;
                 if(nums[i]<0)c++;
                i++,j--;
            }
            else{
            if(nums[i]==0||nums[j]==0)return 0;
            if(nums[i]<0)c++;
            if(nums[j]<0)c++;
            i++, j--;
            }
        }
        return c%2==0? 1:-1;
        
    }
};