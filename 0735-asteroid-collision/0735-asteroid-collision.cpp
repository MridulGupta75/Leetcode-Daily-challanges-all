class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        int n=ast.size();
        for(int i=0;i<n;i++)
        {
            if(!st.empty()&&st.top()>0&&ast[i]<0)
            {
               
                while(!st.empty())
                {
                    if(st.top()<0)
                    {
                        st.push(ast[i]);
                        break;
                    }
                    int sum=ast[i]+st.top();
                    if(sum<0) 
                    {    
                    st.pop();
                   if(st.empty())
                   {
                     st.push(ast[i]);
                    break;
                   }
                    }
                    else if(sum==0)
                    {
                        st.pop();
                        break;
                    }
                    else break;
                }
              
               
            }
            else
                st.push(ast[i]);
        }
        vector<int>sol;
        while(!st.empty())
        {
            sol.push_back(st.top());
            st.pop();
        }
        reverse(sol.begin(),sol.end());
        return  sol;
    }
};