class Solution {
public:
    double myPow(double x, int n) {
        if(x==1)return 1;
        else if(x==0)return 0;
        if(n==0)return 1;
        long long int k=n;
        bool flag=false;
        double res=1;
        if(n<0){
            flag=true;
            k=k*-1;
        }
        while(k>0)
        {
            if(k%2==1)
            {
             res=res*x;
            k--;
            }
          else{
              x=x*x;
              k=k/2;
          }
        } 
        
       if(flag==true)return (1/res);
        return res;
    }
};