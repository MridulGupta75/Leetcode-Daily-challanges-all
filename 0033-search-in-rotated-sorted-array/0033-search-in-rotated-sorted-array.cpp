class Solution {
public:
    int search(vector<int>& nums, int target) {
        
     auto it=find(nums.begin(),nums.end(),target);
            return (it!=nums.end()?it-nums.begin():-1);
        
        
    }
};