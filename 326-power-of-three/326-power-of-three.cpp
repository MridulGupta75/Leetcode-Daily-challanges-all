class Solution {
public:
    bool isPowerOfThree(int n) {
        long long int i=1;
        while(i<n)
        {
          i*=3;
        }
        if(i==n)return true;
        return false;
        
    }
};