class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>s;
        int left[n],right[n];
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&heights[s.top()]>=heights[i])s.pop();
            
            if(s.empty())left[i]=0;
            else left[i]=s.top()+1;
            s.push(i);
            
        }
        
        while(!s.empty())s.pop(); 
        
          for(int i=n-1;i>=0;i--)
        {
            while(!s.empty()&&heights[s.top()]>=heights[i])s.pop();
            
            if(s.empty())right[i]=n-1;
            else right[i]=s.top()-1;
            s.push(i);
            
        }
        
        
        int maxans=INT_MIN;
        
        for(int i=0;i<n;i++)
         maxans=max(maxans,(heights[i]*(abs(left[i]-right[i])+1)));
        return maxans;
        
        
        
    }
};