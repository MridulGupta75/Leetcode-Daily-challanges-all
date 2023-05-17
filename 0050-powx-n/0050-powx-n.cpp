class Solution {
public:
    double myPow(double x, int k) {
        if(x==1)return 1;
        if(x==0)return 0;
        if(k==0)return 1;
        if(k==1)return x;
       double res=1;
        bool flag=false;
        long long int n=k;
        if(n<0)
        {
            flag=true;
            n*=-1;
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