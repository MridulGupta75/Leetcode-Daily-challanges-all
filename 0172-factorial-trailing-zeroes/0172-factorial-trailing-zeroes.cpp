class Solution {
public:
    int trailingZeroes(int n) {
        int i=1,sum=0;
        while(floor(n/pow(5,i))>0)
        {
            sum+=floor(n/pow(5,i));
            i++;
        }
        return sum;
    }
};