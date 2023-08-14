class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int>q;
        for(auto&x:nums)q.push_back(x);
       
        while(k--)
        {
            q.push_front(q.back());
            q.pop_back();
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=q.front();
            q.pop_front();
        }
    }
};