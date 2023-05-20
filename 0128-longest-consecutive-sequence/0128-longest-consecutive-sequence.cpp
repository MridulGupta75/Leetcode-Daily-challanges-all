class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto&x:nums)
            pq.push(x);
        int c=1;
        int m=1;
        int el=pq.top();
        pq.pop();
        while(!pq.empty())
        { 
            
            if(el+1==pq.top())c++;
            else if(pq.top()==el)c=c;
            else
             c=1;
             el=pq.top();
            pq.pop();
            
           

            m=max(m,c);
        }
        return m;
        
    }
};