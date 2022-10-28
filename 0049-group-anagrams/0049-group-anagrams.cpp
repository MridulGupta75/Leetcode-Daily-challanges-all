class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string,vector<string>>mp;
        for(auto i:strs)
        {
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>> sol;
        for(auto i:mp)
        sol.push_back(i.second);
        return sol;
    }
};