class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char,short>>st;
        for(auto c:s)
        {
        if(st.empty()||st.back().first!=c)st.push_back({c,1});
        else
            st.back().second++;
            if(st.back().second==k)st.pop_back();
        }
        string res;
        for(auto ch:st)
            res=res+string(ch.second,ch.first);
        return res;
    }
};