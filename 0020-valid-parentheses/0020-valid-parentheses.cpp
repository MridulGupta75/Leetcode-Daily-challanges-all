class Solution {
    private:
    stack<char>st;
public:
    bool isValid(string s) {
        for(auto&x:s)
        {
            if(x=='('||x=='['||x=='{') st.push(x);
            else
            {
                if(!st.empty()&&(st.top()==x-2||st.top()==x-1)) 
                {
                    st.pop();
                    continue;
                }
                return false;
            }
        }
         return st.empty()?true:false;
    }
};