class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>odd;
        priority_queue<int>e;
        string n=to_string(num);
        for(auto&x:n)
        {
            if((x-'0')%2)
                odd.push(x-'0');
            else
                e.push(x-'0');
        }
        int ans=0;
    for(auto&x:n)
    {
        ans*=10;
        if((x-'0')%2)
        {
           ans+=(odd.top());
            odd.pop();
        }
        else
        {
            ans+=(e.top());
            e.pop();
        }
    }
        return ans;
    }
};