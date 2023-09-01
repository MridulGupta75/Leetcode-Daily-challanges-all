class Solution {
    private:
    int count(int n)
    {
        int c=0;
        while(n>0)
        {
            if(n%2!=0)c++;
            n=n>>1;
        }
        return c;
    }
public:
    vector<int> countBits(int n) {
        vector<int>ans{0};
        for(int i=1;i<=n;i++)
        ans.push_back(count(i));
        
        return ans;
        
    }
};