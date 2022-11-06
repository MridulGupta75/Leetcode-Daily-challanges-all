class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     if(strs.size()==0)return"" ;
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        string sol="";
        for(int i=0;i<first.length();i++)
        {
            if(first[i]==last[i])
                sol+=first[i];
            else
                return sol;
        }
        return sol;
    }
};   