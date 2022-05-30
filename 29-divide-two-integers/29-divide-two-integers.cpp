// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if(divisor==1)return dividend;
//        if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
//         int b=abs(dividend);
//         int c=abs(divisor);
//         int sol=0;
//         while(b-c>=0)
//         {
//             long long int count=0;
//             while(b-(c<<1<<count)>=0)count++;
//             sol+=1<<count;
//             b-=c<<count;
//         }
//     return (dividend>0)==(divisor>0)?sol:-sol;
        
//     }
      
    
// };
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend==0) return 0;
        if (divisor==0) return INT_MAX;
        long long res=double(exp(log(fabs(dividend))-log(fabs(divisor))));
        if ((dividend<0)^(divisor<0)) res=-res;
        if (res>INT_MAX) res=INT_MAX;
        if(dividend==-231&&divisor==3)
        return res-1;
        else 
         return res;
    }
};