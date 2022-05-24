class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        return false;
     }
};
/*multiset<pair<char,char>>s1;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length())
        return false;
        else
        return s==t;*/