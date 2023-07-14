class Solution {
public:
    bool comp(string x,string y)
    {
        if(x.length()-1!=y.length())return false;
        
        int p1=0,p2=0;
        bool flag=true;
        while(p1!=x.length()&&p2!=y.length())
        {
            if(x[p1]==y[p2])p1++,p2++;
            else
            {
                if(p1==p2)
                p1++;
                else 
                {
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }
    static bool cop(string&a,string&b)
    {
        return a.size()<b.size();
    }
    int longestStrChain(vector<string>& words) {
           sort(words.begin(),words.end(),cop);
        int n=words.size();
        vector<int>dp(n,1);
     
        int ans=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(comp(words[i],words[j])&&dp[j]+1>dp[i])
                {
                    dp[i]=dp[j]+1;
                }
            }
            if(ans<dp[i])
                ans=dp[i];
        }
        return ans;
        
    }
};