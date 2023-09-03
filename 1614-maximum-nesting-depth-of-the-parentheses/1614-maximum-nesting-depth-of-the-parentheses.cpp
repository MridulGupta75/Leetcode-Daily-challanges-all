class Solution {
public:
    int maxDepth(string s) {
        int c=0,maxi=0;
        stack<char>st;
        for(auto&x:s)
        {
            if((st.empty()||x!=')')&&x=='(') st.push(x),c++;
            else if(x==')')c--,st.pop();
            maxi=max(maxi,c);
        }
        return maxi;
        
    }
};