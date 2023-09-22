class Solution {
    private:
    bool func(int i,int j,string&s,string&t)
    {
        if(i==s.size())return true;
        if(j==t.size())return false;
        if(s[i]==t[j])return func(i+1,j+1,s,t);
        return func(i,j+1,s,t);
    }
public:
    bool isSubsequence(string s, string t) {
        return func(0,0,s,t);
    }
};