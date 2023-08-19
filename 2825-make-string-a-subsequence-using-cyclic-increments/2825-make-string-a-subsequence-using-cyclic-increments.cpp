class Solution {
    private:
    bool func(string&str1,string&str2,int idx1,int idx2)
    {
        if(idx2>=str2.size())return true;
        if(idx1>=str1.size())return false;
       if(str1[idx1]==str2[idx2])return func(str1,str2,idx1+1,idx2+1);
        if(str1[idx1]+1==str2[idx2]||(str1[idx1]=='z'&&str2[idx2]=='a'))return func(str1,str2,idx1+1,idx2+1);
        return func(str1,str2,idx1+1,idx2);
           
    }
public:
    bool canMakeSubsequence(string str1, string str2) {
        return func(str1,str2,0,0);
    }
};