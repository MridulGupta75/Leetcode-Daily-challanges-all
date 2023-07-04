class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0;
        for(auto&x:nums)
        one=(one^x);
        
        return one;
    }
};