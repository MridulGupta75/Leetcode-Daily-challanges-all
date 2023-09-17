class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string str="";
        int n=strs.size();
        int len=min(strs[0].size(),strs[n-1].size());
        int i=0;
        while(i<len)
        {
            if(strs[0][i]==strs[n-1][i])
            {
                str.push_back(strs[0][i]);
                i++;
            }
            else break;
        }
        return str;
    }
};