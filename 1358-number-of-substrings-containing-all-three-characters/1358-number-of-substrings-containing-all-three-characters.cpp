class Solution {
    private:
    bool check(vector<int>v)
    {
        if(v[0]==-1||v[1]==-1||v[2]==-1)return false;
        return true;
    }
    
public:
    int numberOfSubstrings(string s) {
        int j=0;
        vector<int>mp(3,-1);
        int count =0;
        while(j<s.size())
        {
            if(s[j]=='a')mp[0]=j;
            else if(s[j]=='b')mp[1]=j;
            else mp[2]=j;
            if(check(mp))count+=min(mp[0],min(mp[1],mp[2]))+1;
            j++;
        }
        return count ;
    }
};