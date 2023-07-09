class Solution {
public:
    int largestVariance(string s) {
        vector<int>count(26,0);
        for(auto&x:s)count[x-'a']=1;
        int res=0;
        for(char f='a';f<='z';f++)
        {
           
            for(char se='a';se<='z';se++)
            {
                if(count[f-'a']==0||count[se-'a']==0)continue;
                 int cs=0;
                 int cf=0;
                bool prech=false;
                for(char &x:s)
                {
                    if(x==f)cf++;
                     if(x==se)cs++;
                    if(cs>0)res=max(res,cf-cs);
                    else 
                        if(prech)res=max(res,cf-1);
                    if(cf-cs<0)
                    cf=0,cs=0,prech=true;
                }
            }
        }
        return res;
    }
};