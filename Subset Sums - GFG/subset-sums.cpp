//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:


    void func(vector<int>&arr, int N,int ind,int sum,vector<int>&sol)
    {
        //base case
        if(ind==N)
        {
            sol.push_back(sum);
            return;
        }
        //conditions
        //take
        
        func(arr,N,ind+1,sum+arr[ind],sol);
        func(arr,N,ind+1,sum,sol);
        
        //not take
        
    }


    vector<int> subsetSums(vector<int> arr, int N)
    {
      vector<int>sol;
      func(arr,N,0,0,sol);
      return sol;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends