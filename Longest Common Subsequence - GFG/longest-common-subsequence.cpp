//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    
    int func(int ind1,int ind2,string s1, string s2,vector<vector<int>>&dp)
    {
        //base case
        if(ind1<0||ind2<0)return 0;
        //main case
        //if satisfy
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2])
        return dp[ind1][ind2]=1+func(ind1-1,ind2-1,s1,s2,dp);
        //if not 
        //check take 
        //not take
        
        return dp[ind1][ind2]=max(0+func(ind1-1,ind2,s1,s2,dp),0+func(ind1,ind2-1,s1,s2,dp));
    }
    
    
    int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>>dp(x,vector<int>(y,-1));
          return func(x-1,y-1,s1,s2,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends