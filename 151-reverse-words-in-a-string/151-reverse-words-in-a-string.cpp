
class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                st.push(str);
                str="";
            }
            else str+=s[i];
        }
        st.push(str);
        string so="";
        while(!st.empty())
        {
            if(st.top()!="")
            {
                if(so=="")
                    so=st.top();
                else
                so=so+' '+st.top();
            }
           st.pop();
        }
        return so;
   }
};