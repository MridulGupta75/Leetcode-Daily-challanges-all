class Solution {
public:
    bool isHappy(int n) {
        set<int>st;
        while(n>1)
        {
            if(st.find(n)!=st.end())return false;
             st.insert(n);
            int sum=0;
            while(n)
            {
                sum+=(n%10)*(n%10);
                n=n/10;
            }
           
            n=sum;
        }
        return true;
    }
};