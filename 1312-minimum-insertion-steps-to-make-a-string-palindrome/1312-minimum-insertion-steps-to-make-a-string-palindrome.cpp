class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        string t="";
        for(int i=n-1;i>=0;i--)t.push_back(s[i]);
        vector<int>curr(n+1,0),pre(n+1,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==t[j-1])
                curr[j]=1+pre[j-1];
                else
                curr[j]=max(curr[j-1],pre[j]);
            }
            pre=curr;

        }
        return n-pre[n];
    }
};