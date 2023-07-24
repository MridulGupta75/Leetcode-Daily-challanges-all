class Solution {
public:
    double myPow(double x, int k) {
        bool xflag=false;
        bool nflag=false;
        double sol=1;
        if(k<0)nflag=true;
        long n=abs(k);
        if(x<0&&n%2)xflag=true;
        x=abs(x);
        while(n>0)
            if(n%2)sol*=x,n--;
            else x*=x,n/=2;
        if(xflag)sol*=-1;
        return nflag?1.0/sol:sol;
        
    }
};