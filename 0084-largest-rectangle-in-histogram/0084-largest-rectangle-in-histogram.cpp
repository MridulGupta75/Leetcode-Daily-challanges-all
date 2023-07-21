class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        vector<int>lt(n,0);
        for(int i=0;i<n;i++)
        {

            
                while(!st.empty()&&heights[i]<=heights[st.top()])
                {
                    st.pop();
                }
                if(st.empty())lt[i]=0;
                else lt[i]=st.top()+1;
                st.push(i);
            
        }

        st=stack<int>();
         vector<int>rt(n,0);
         for(int i=n-1;i>=0;i--)
        {
          
           
                while(!st.empty()&&heights[i]<=heights[st.top()])
                {
                    st.pop();
                }
                if(st.empty())rt[i]=n-1;
                else rt[i]=st.top()-1;
                st.push(i);
            
        }
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int w=rt[i]-lt[i]+1;
            maxi=max(w*heights[i],maxi);
        }
        
        return maxi;
        
    }
};