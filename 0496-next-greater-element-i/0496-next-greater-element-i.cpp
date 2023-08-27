class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        stack<int>st;
        int n=nums2.size();
        st.push(nums2[n-1]);
        mpp[nums2[n-1]]=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(!st.empty()&&st.top()>nums2[i])
            {
                mpp[nums2[i]]=st.top();
            }
            else
            {
                while(!st.empty()&&st.top()<nums2[i])
                    st.pop();
                 if(st.empty())mpp[nums2[i]]=-1;
                else
                 mpp[nums2[i]]=st.top();
                
            }
             st.push(nums2[i]);
        }
        vector<int>sol;
        for(auto&x:nums1)
        {
            sol.push_back(mpp[x]);
        }
        return sol;
    }
};