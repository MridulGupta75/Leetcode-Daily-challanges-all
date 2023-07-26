class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>sol;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--)
        {
            if(i<n)
            {
            if(!st.empty()&&nums[i%n]<st.top())
                sol.push_back(st.top());
                else
            {
                while(!st.empty()&&nums[i%n]>=st.top())
                    st.pop();
                if(st.empty())sol.push_back(-1);
                else sol.push_back(st.top());
            }
            }
            
            st.push(nums[i%n]);
        }
        
        // vector<int>sol1;
        // for(int i=0,j=n;i<n;i++,j++)
        //     sol1.push_back(max(sol[i],sol[j]));
        reverse(sol.begin(),sol.end());
        return sol;
        
    }
};