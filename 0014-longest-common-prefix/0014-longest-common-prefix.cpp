class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0],last=strs[strs.size()-1];
        string sol="";
        for(int i=0;i<min(first.size(),last.size());i++)
        {
            if(first[i]==last[i])sol.push_back(first[i]);
            else break;
        }
        return sol;
    }
};