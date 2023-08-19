class Solution {
    private:
    int gcd(int a,int b)
    {
        while(a>0&&b>0)
        {
            if(a>b)a%=b;
            else b%=a;
        }
        return a==0?b:a;
    }
public:
    int findGCD(vector<int>& nums) {
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        return gcd(a,b);
    }
};