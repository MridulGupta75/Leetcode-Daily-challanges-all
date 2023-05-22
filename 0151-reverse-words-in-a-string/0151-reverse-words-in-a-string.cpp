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
            else
            {
                str+=s[i];
            }
            
        }
      
        st.push(str);
        string sol="";
        while(!st.empty())
        {
            if(st.top()!="")
            {
            if(sol=="")
            sol+=st.top();
            else
                sol=sol+' '+st.top();
            }
            
            st.pop();
        }
        return sol;
    }
};