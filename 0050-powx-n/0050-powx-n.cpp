class Solution {
public:
    double myPow(double x, int k) {
        
        double sol=1;
        bool nflag=false;
        bool xflag=false;
        if(k<0)nflag=true;
     
        long long n=abs(k);
        if(x<0&&n%2) xflag=true;
        double y=abs(x);
    
        while(n>0)
        {
            if(n%2)
            {
                sol*=y;
                n=n-1;
            }
            else
            {
                y=y*y;
                n=n/2;
            }
        }
        if(xflag)sol*=-1;
        return nflag?1.0/sol:sol;
    }
};