//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int ,int>mpp;
        int sum=0;
        int l=-1;
        mpp.insert({0,-1});
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            auto itr=mpp.find(sum);
            if(itr!=mpp.end())
            {
                l=max(l,i-((itr->second)+1));
            }
            else 
            {
                mpp.insert({sum,i});
            }
            
        }
        return l+1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends