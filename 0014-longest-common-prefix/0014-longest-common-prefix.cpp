class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            while(strs[i].substr(0,prefix.size())!=prefix)
            {
                prefix=prefix.substr(0,prefix.size()-1);
            }
        }
        return prefix;
    }
};