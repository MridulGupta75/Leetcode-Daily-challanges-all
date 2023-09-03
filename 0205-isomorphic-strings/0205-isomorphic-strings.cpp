class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,bool>isThere;
        unordered_map<char,char>pr;
        for(int i=0;i<s.size();i++)
        {
           
            if(pr.find(s[i])==pr.end()&&isThere.find(t[i])==isThere.end())
            {
                pr[s[i]]=t[i];
                isThere[t[i]]=true;
            }
            else if(pr.find(s[i])==pr.end()&&isThere.find(t[i])!=isThere.end())return false;
            else if(pr.find(s[i])!=pr.end()&&pr[s[i]]!=t[i])return false;
            
        }
        return true;
        
    }
};