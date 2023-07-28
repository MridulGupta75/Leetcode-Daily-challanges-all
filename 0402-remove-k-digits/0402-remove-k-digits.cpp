class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        
        for(int i=0;i<num.size();i++)
        {
            while(k>0&&(!st.empty()&&num[i]<st.top())) st.pop(),k--;
            st.push(num[i]);
        }
        string sol="";
        while(!st.empty()&&k>0) st.pop(),k--;
        
        while(!st.empty()) sol+=st.top(),st.pop();
        
        reverse(sol.begin(),sol.end());
        int i=0;
          for(;i<sol.size();i++){
            if(sol[i]=='0')
                continue;
            break;
        }
        if(i==sol.size())
            return "0";
        return sol.substr(i);
         
       
   
    }
};