class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>st;
        for(auto&X:wordList)st.insert(X);
        if(st.find(endWord)==st.end())return 0;
        queue<pair<string,int>>q;
        q.push({beginWord,0});
        while(!q.empty())
        {
            auto x=q.front();
            if(x.first==endWord)return x.second+1;
            q.pop();
            for(int i=0;i<beginWord.size();i++)
            {
                char ch=x.first[i];
                do
                {
                    if(x.first[i]=='z') x.first[i]='a';
                    else x.first[i]=x.first[i]+1;
                    auto itr=st.find(x.first);
                    if(itr!=st.end())
                    {
                        q.push({x.first,x.second+1});
                        st.erase(itr);
                    }
                        
                } while(x.first[i]!=ch);
            }
        }
        return 0;
        
    }
};