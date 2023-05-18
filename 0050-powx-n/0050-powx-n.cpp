class Solution {
public:
    double myPow(double x, int n) {
        
        
        double res = 1;
        bool flag = false;
         long long k = n;
        if(n < 0)
            flag = true, k = abs(n);
        
        while(k)
        {
            if(k & 1)
                res *= x;
            x *= x;
            k >>= 1;
        }
        if(flag)
            return 1.0 / res;
        return res;
    }
};