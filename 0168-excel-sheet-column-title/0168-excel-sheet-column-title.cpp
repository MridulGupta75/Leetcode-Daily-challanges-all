class Solution {
    private:
    vector<char>ch{'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
public:
    string convertToTitle(int cn) {
        stack<char>st;
        while(cn>26)
        {
            int rem=cn%26;
            st.push(ch[rem]);
            cn=cn/26;
            if(rem==0)cn--;
        }
        st.push(ch[cn]);
        string str="";
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        return str;
    }
};