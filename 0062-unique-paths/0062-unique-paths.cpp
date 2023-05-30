class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-1;
        int R=min(m-1,n-1);
        long long sum=1;
        for(int i=1;i<=R;i++)
        {
            sum=sum*(N-i)/i;
        }
        return sum;
    }
};