class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string s1="";
        for(int i=s.length()-1;i>=0;i--)
        s1.push_back(s[i]);
        int n=s.length();
        vector<int>curr(n+1,0),pre(n+1,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==s1[j-1])
                curr[j]=1+pre[j-1];
                else
                curr[j]=max(pre[j],curr[j-1]);
            }
            pre=curr;
        }
        return pre[n];
    }
};