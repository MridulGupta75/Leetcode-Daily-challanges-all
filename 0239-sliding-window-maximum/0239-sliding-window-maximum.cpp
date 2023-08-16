class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        int m=0;
        vector<int>sol;
     for(int i=0;i<nums.size();i++)
     {
           if(dq.empty()||nums[dq.back()]>=nums[i])dq.push_back(i);
             else if(nums[dq.back()]<nums[i])
             {
                 while(!dq.empty()&&nums[dq.back()]<nums[i])dq.pop_back();
                 dq.push_back(i);
             }
             if(i<k-1)continue;
               sol.push_back(nums[dq.front()]);
                if(dq.front()==m)dq.pop_front();
                m++;
     }
        return sol;
        
    }
};