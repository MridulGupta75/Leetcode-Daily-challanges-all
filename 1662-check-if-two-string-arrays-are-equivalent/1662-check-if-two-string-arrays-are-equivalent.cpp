class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",s1="";
        for(auto&x:word1)s+=x;
        for(auto&x:word2)s1+=x;
        return s==s1?true:false;
    }
};