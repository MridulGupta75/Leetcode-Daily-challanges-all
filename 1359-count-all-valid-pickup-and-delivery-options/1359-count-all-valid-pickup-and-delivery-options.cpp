class Solution {
    private:
    int M=1e9+7;
public:
    int countOrders(int n) {
        long long ans=1;
        for(int i=2;i<=n;i++)
        {
            int spaces=(i-1)*2+1;
            ans*=spaces*(spaces+1)/2;
            ans=ans%M;
        }
        return ans;
        
    }
};