class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // brute aproach 
        //  k=k%nums.size();
        // if(nums.size()<=1||k<=0) return;
        // int d=nums.size()-k;
        // int temp[k];
        // int cc=0;
        // for(int i=d;i<nums.size();i++) temp[cc++]=nums[i];
        // cc=d-1;
        // for(int j=nums.size()-1;cc>=0;j--) if(cc>=0)nums[j]=nums[cc--];
        // for(int i=0;i<k;i++)nums[i]=temp[i];
        


        // optimal


        k=k%nums.size();

        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end()-k);
        
        reverse(nums.begin(),nums.end());
    }
};