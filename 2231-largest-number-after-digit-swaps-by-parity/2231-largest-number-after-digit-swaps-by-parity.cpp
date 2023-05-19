class Solution {
public:
    int largestInteger(int num) {
        vector<int>odd;
        vector<int>e;
        string n=to_string(num);
        for(auto&x:n)
        {
            if((x-'0')%2)
                odd.push_back(x-'0');
            else
                e.push_back(x-'0');
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(e.begin(),e.end(),greater<int>());
        int ans=0;
        int i=0;
        int j=0;
    for(auto&x:n)
    {
        ans*=10;
        if((x-'0')%2)
        {
           ans+=(odd[i++]);
            
        }
        else
        {
            ans+=(e[j++]);
           
        }
    }
        return ans;
    }
};