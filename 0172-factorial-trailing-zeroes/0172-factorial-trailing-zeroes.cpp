class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0,i=1;
        while(n/pow(5,i)>0)
        {
            sum+=n/pow(5,i);
            i++;
            
        }
        return sum;
    }
};