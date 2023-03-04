class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mink, int maxk) {
        int li=-1,mik=-1,mak=-1;
        long long sol=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mink||nums[i]>maxk) li=i,mik=-1,mak=-1;
            else
            {
                if(nums[i]==mink)mik=i;
                if(nums[i]==maxk)mak=i;
                if(mik!=-1&&mak!=-1) sol+=min(mik,mak)-li;
            }
        }
        return sol;
        
    }
};