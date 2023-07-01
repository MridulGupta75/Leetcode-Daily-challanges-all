class Solution {
public:
    void solve(vector<int>& cookies,int k,int i,vector<int>& b,int&m)
    {
        int res=INT_MIN;
        if(i==cookies.size())
        {
            for(int i=0;i<b.size();i++)
                res=max(b[i],res);
            m=min(m,res);
            return;
        }
        
        
        for(int j=0;j<k;j++)
        {
            b[j]=b[j]+cookies[i];
            solve(cookies,k,i+1,b,m);
            b[j]=b[j]-cookies[i];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>b(k,0);
        int m=INT_MAX;
      solve(cookies,k,0,b,m);
        return m;
    }
};