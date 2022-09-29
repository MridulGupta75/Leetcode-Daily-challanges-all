
class Solution {
public:
    string reverseWords(string s) {
      //   string str="",str1="";
      //   for(int i=0;i<s.length();i++)
      //   {
      //       if(s[i]==' ')
      //       {
      //           str=str1+' '+str;
      //           str1="";
      //       }
      //       else
      //       {
      //           str1+=s[i];
      //       }
      //   }
      //   str=str1+' '+str;
      // str.erase(str.find_last_not_of(" \n\r\t")+1);
      //   return str;
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
                str+=s[i];
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