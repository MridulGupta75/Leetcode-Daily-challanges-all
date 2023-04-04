class Solution {
public:
    int partitionString(string s) {
        int ans=1;
        set<char>ch;
        for(auto it:s)
        {
            if(ch.find(it)!=ch.end())
            {
                ch.clear();
                ans++;
            }
            ch.insert(it);
        }
        return ans;
    }
};