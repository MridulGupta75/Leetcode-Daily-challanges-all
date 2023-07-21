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
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>>solmat(matrix.size(),vector(matrix[0].size(),0));
     for(int i=0;i<matrix.size();i++)
     {
         for(int y=0;y<matrix[0].size();y++)
             if(matrix[i][y]=='1')
                 solmat[i][y]=1;
     }
        int ma=0;
        vector<int>ht(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++)
     {
         for(int y=0;y<matrix[0].size();y++)
         {
             if(solmat[i][y]==1)ht[y]++;
             else ht[y]=0;
         }
            // for(auto&m:ht)
            //     cout<<m<<" ";
            int r=largestRectangleArea(ht);
           
            ma=max(r,ma);
        }
        return ma;
        
        
        
    }
};