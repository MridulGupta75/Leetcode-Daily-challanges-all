class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int>st;
        int n=ast.size();
        for(int i=0;i<n;i++)
        {
            if(!st.empty()&&st.back()>0&&ast[i]<0)
            {
               
                while(!st.empty())
                {
                    if(st.back()<0)
                    {
                        st.push_back(ast[i]);
                        break;
                    }
                    int sum=ast[i]+st.back();
                    if(sum<0) 
                    {    
                    st.pop_back();
                   if(st.empty())
                   {
                     st.push_back(ast[i]);
                    break;
                   }
                    }
                    else if(sum==0)
                    {
                        st.pop_back();
                        break;
                    }
                    else break;
                }
              
               
            }
            else
                st.push_back(ast[i]);
        }
        return  st;
    }
};