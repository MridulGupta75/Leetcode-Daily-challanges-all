class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())return false;
        int pos1=-1,pos2=-1;
         for(int i=0;i<s.length();i++)
         {
             if(s[i]!=goal[i]&&(pos1==-1||pos2==-1))
             {
                 if(pos1==-1)
                     pos1=i;
                 else
                     pos2=i;
             }
             else if(s[i]!=goal[i]&&(pos1!=-1||pos2!=-1))
                 return false;
         }
        if(pos1!=-1&&pos2==-1)return false;
        if(pos1==-1)
        {
            map<int,int>mpp;
             for(int i=0;i<s.length();i++)
             {
                 if(mpp.find(s[i])!=mpp.end())
                     return true;
                 else
                     mpp.insert({s[i],1});
             }
            return false;
        }
         else 
             if(s[pos1]==goal[pos2]&&s[pos2]==goal[pos1]) return true;
        return false;
        
    }
};