class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k=k%nums.size();
        if(nums.size()<=1||k<=0) return;
        int d=nums.size()-k;
        int c=d-1;
        int temp[k];
        int cc=0;
        for(int i=d;i<nums.size();i++) temp[cc++]=nums[i];

        for(int j=nums.size()-1;c>=0;j--) if(c>=0)nums[j]=nums[c--];
        for(int i=0;i<k;i++)nums[i]=temp[i];
        
    }
};