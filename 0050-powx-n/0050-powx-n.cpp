class Solution {
public:
    double myPow(double x, int k) {
        bool nflag=false;
        double sol=1;
        if(k<0)nflag=true;
        long n=abs(k);
        while(n>0)
            if(n%2)sol*=x,n--;
            else x*=x,n/=2;
        return nflag?1.0/sol:sol;
        
    }
};