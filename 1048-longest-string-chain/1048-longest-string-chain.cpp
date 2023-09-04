class Solution {
    private:
    
    //check for string if one ele del it will make it
    bool checkForString(string&x,string&y)
    {
        if(x.size()+1!=y.size())return false;
        bool flag=true;
        int p1=0,p2=0;
        while(p1<x.size()&&p2<y.size())
        {
            if(x[p1]==y[p2])p1++,p2++;
            else
            {
                if(p1==p2)p2++;
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        return flag;
    }
    //sort with help of size
    static bool comp(string&s,string&t)
    {
        return s.size()<t.size();
    }
    
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int n=words.size();
        int ans=1;
        vector<int>dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++) if(checkForString(words[j],words[i])&&dp[j]+1>dp[i]) dp[i]=dp[j]+1;
            ans=max(ans,dp[i]);
        }
        return ans;
        
    }
};