class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)return false;
        stack<char>st;
        for(char &x:s)
        {
          
            if(st.empty())
                st.push(x);
            else if((st.top()=='('&&x==')')||(st.top()=='{'&&x=='}')||(st.top()=='['&&x==']'))
                st.pop();
            else st.push(x);
        
          
        }
        return st.empty();
    }
};