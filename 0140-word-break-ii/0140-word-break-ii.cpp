class Solution {
private:
    set<string>st;//for storing ther value of dictionary
     vector<string>sol;//to stoe the answers
    void solve(int index,int n,string&s,string subsol)
    {
        if(index>n)return ;
        if(st.find(s.substr(index))!=st.end())
        {
              if(subsol!="")
                sol.push_back(subsol+ ' '+s.substr(index));
                else sol.push_back(subsol+s.substr(index));
           
        }
        for(int i=index;i<=n;i++)
        {
              string str=s.substr(index,i-index+1);
            if(st.find(str)!=st.end())
            {
                if(subsol!="")
                solve(i+1,n,s,subsol+' '+str);
                else solve(i+1,n,s,subsol+str);
            }
        }
    }
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(auto&x:wordDict)st.insert(x);
       solve(0,s.size()-1,s,"");
        return sol;
    }
};