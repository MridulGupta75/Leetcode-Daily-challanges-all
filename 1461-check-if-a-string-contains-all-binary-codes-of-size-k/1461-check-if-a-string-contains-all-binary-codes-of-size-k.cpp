class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<=k)return false;
        unordered_set<string>set1;
        for(int i=0;i<=s.size()-k;i++)
            set1.insert(s.substr(i,k));
        return set1.size()==pow(2,k);
    }
};