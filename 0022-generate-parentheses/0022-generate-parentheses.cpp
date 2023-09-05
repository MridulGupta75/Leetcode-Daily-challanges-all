class Solution {
    private:
    vector<string>vec;
    bool check(string&str)
    {
        stack<char>st;
        for(auto&x:str)
        {
            if(st.empty()&&x==')')return false;
            if(x=='(')st.push(x);
            else st.pop();
        }
        if(st.empty())return true;
        return false;
    }
    void func(int i,int n,string &str)
    {
        if(i==n*2)
        {
            if(check(str))
            vec.push_back(str);
            return ;
        }
        if(i>n*2)return ;
        str+='(';
        func(i+1,n,str);
        str.pop_back();
        str+=')';
        func(i+1,n,str);
         str.pop_back();
    }
public:
    vector<string> generateParenthesis(int n) {
        string str="";
        func(0,n,str);
        return vec;
    }
};