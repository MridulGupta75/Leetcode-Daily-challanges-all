class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c2=0;
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)continue;
            ans[c2++]=nums[i];
        }
        while(c2<nums.size()){
         ans[c2++]=0;
        }
      nums=ans;
    }
};