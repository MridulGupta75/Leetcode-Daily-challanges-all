class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n=weights.size();
        vector<int>psum(n-1,0);
        for(int i=0;i<n-1;i++)
        psum[i]=weights[i]+weights[i+1];
        sort(psum.begin(),psum.end());
        long long mini=0,maxi=0;
        // for(auto&x:psum)cout<<x<<" ";
        for(int i=0;i<k-1;i++)
        {
            mini+=psum[i];
            maxi+=psum[n-2-i];
        }
        return abs(maxi-mini);
    }
};