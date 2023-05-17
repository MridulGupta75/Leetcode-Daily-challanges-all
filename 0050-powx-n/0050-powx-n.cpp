class Solution {
public:
    double myPow(double x, int k) {
        
       double res=1;
        bool flag=false;
        long long n=k;
        if(n<0)
        {
            flag=true;
            n=-n;
        }
        while(n>0)
        {
            if(n%2==0)
            {
                x=x*x;
                n=n/2;
            }
            else
            {
                res=res*x;
                n--;
            }
        }
        if(flag==true)return(1/res);
        return res;
    }
};