class Solution {
public:
    int partitionString(string s) {
        int ans=1;
        set<char>st;
        for(auto it:s)
        {
            if(st.find(it)!=st.end())
            st.clear(),ans++;
            st.insert(it);
        }
        return ans;
    }
};