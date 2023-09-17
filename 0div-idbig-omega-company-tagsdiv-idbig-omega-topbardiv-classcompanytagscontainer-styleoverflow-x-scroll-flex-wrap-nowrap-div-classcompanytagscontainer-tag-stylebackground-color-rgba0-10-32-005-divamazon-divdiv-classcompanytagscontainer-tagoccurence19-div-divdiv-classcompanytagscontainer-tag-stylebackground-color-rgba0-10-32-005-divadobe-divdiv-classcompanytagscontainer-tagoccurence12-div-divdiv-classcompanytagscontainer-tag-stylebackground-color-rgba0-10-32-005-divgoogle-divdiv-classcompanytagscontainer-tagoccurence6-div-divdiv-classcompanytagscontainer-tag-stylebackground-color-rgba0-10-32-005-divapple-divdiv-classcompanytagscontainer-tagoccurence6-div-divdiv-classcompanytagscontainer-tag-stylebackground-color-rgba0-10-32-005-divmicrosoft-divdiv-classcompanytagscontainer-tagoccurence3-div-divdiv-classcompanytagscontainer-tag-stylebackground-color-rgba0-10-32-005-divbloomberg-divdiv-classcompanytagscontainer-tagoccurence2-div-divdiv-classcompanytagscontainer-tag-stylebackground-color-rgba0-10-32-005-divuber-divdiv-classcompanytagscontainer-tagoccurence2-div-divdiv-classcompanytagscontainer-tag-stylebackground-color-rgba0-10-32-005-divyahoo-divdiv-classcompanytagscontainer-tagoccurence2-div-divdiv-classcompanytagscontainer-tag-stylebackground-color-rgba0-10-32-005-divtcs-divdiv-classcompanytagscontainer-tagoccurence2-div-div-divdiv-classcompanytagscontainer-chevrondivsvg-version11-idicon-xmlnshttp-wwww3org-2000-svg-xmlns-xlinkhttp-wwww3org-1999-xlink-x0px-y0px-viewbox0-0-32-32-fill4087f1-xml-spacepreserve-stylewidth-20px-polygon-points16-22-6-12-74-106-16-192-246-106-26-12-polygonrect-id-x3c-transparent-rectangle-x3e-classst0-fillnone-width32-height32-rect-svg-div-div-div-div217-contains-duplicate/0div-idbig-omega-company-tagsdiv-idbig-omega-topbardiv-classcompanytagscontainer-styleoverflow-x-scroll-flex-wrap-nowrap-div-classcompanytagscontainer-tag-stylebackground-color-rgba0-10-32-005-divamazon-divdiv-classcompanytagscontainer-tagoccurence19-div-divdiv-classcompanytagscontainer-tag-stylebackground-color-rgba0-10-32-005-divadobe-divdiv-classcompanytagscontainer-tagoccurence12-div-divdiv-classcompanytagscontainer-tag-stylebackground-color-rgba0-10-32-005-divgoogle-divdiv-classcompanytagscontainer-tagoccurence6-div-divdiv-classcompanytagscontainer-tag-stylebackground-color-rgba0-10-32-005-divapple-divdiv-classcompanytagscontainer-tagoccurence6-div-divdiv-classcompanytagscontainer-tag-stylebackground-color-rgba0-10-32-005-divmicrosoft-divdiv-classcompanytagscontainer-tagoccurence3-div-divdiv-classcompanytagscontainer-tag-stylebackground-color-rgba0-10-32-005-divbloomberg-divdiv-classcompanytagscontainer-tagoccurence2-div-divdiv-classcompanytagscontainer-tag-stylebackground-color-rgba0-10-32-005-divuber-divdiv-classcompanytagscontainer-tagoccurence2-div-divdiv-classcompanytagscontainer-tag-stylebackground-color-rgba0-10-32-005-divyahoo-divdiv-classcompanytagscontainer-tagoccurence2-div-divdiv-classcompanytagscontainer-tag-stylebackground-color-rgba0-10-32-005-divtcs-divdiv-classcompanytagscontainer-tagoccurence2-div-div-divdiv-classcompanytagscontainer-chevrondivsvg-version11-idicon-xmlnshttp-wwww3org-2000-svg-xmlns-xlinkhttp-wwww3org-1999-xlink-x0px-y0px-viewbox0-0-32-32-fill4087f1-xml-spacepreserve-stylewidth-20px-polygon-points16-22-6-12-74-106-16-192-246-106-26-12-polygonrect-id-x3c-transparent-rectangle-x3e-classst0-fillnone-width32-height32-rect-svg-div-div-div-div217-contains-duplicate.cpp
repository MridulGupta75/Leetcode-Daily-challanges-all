class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto&x:nums)if(st.find(x)!=st.end())return true;else st.insert(x);
        return false;
    }
};