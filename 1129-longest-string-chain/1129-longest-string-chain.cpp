class Solution {
  private:
  bool check(string &s,string&t)
  {
    if(t.size()+1!=s.size())return false;
    int p1=0,p2=0;
    while(p1<s.size()&&p2<t.size())
    {
      if(s[p1]==t[p2])p1++,p2++;
      else
      {
        if(p1==p2)p1++;
        else
         return false;
      }
    }
    return true;
  }
  static bool comp(string&s,string&t)
  {
    return s.size()<t.size();
  }
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int n=words.size();
        vector<int>dp(n,1);
        int ans=1;
        for(int i=1;i<n;i++)
        {
          for(int j=0;j<i;j++)
          if(check(words[i],words[j])&&dp[i]<dp[j]+1)dp[i]=dp[j]+1,ans=max(ans,dp[i]);
        }
        return ans;
    }
};