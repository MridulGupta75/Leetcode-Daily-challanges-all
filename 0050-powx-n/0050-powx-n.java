class Solution {
    public double myPow(double x, int n) {
      long nn=n;
      double ans=1.0;
      boolean flag =false;
      if(nn<0)
      {
        flag =true;
        nn*=-1;
      } 

     while(nn>0)
     {
       if(nn%2==1)
       {
        ans=ans*x;
        nn--;
       }
       else
       {
        x=x*x;
        nn=nn/2;
       }
     }
     if(flag)return 1.0/ans;
     return ans;


    }
}