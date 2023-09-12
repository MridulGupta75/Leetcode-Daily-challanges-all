class Solution {
public:
    int minDeletions(string s) {
        // mera tarika
        
        
        
        // unordered_map<char,int>mpp;
        // for(auto&x:s)mpp[x]++;
        // map<int,vector<char>,greater<int>>m;
        // for(auto&x:mpp) m[x.second].push_back(x.first);
        // mpp.clear();
        // int c=0;
        // for(auto&x:m)
        // {
        //     if(x.first==0)return c;
        //     int size=x.second.size();
        //     if(size-1!=0) for(int i=1;i<size;i++,c++) m[x.first-1].push_back(x.second[i]);
        // }
        // return c;
        
        
        // tarrika 2
        
        vector<int>freq(26,0);
        for(auto&x:s) freq[x-'a']++;
        set<int>st;
        int c=0;
        for(int i=0;i<26;i++)
        {
            
            while(freq[i]>0&&st.find(freq[i])!=st.end())
            {
                freq[i]--;
                c++;
            }
            st.insert(freq[i]);
            
        }
        return c;
    }
};