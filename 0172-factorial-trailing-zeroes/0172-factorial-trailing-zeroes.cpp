class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0,i=1;
        int x=1;
        while(x>0)
        {
            x=floor(n/pow(5,i));
            sum+=x;
            i++;
            
        }
        return sum;
    }
};