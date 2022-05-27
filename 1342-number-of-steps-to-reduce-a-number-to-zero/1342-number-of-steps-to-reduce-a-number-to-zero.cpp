class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
        while(n>0)
        {
            c++;
            if(n%2==0)n/=2;
            else n--;
        }
        return c;
    }
};