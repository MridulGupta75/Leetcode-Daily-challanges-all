class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-1;
        int r=min(n,m)-1;
        double res=1;
        for(int i=1;i<=r;i++)
        res=res*(N-i)/i;
        return res;
    }
};