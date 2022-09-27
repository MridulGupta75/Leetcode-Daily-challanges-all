class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>sol;
        for(int i=0;i<s.length();i++)
        {
            auto it=sol.find(s[i]);
            if(it!=sol.end())
            {
                it->second=it->second+1;
            }
            else
                sol.insert({s[i],1});
        }
        auto itr=sol.begin();
        int x=itr->second;
        int k=0;
        for(auto it =sol.begin();it!=sol.end();it++)
        {
            if(it->second!=x)return false;
            
        }
        return true;
    }
};