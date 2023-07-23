class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto&x:piles)pq.push(x);
        
        while(k--)
        {
            int x=pq.top(); //5
            x=x-floor(x/2); 
            pq.pop();
            pq.push(x);
        }
        int sum=0;
        while(!pq.empty())
        {
            // cout<<pq.top()<<" ";
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};