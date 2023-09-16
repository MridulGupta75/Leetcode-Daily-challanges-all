class Solution {
public:
    int countOdds(int low, int high) {
        int no=high-low-1;
        int c=0;
        if(high&1)c++;
        if(high!=low) if(low&1)c++;
        if(c==2)c+=no/2;
        else
        c+=(no+1)/2;
        return c;
    }
};