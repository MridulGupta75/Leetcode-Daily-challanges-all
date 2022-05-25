// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        if(n<=2)return n;
        int dp[n][n];
        int max_length_ap=2;
        for(int i=0;i<n-1;i++)
        dp[i][n-1]=2;
        for(int j=n-2;j>0;j--)
        {
            int i=j-1,k=j+1;
            while(k<n&&i>=0)
            {
                if(A[i]+A[k]<2*A[j])k++;
                else if(A[i]+A[k]>2*A[j])dp[i][j]=2,i--;
                else
                {
                    dp[i][j]=dp[j][k]+1;
                    max_length_ap=max(max_length_ap,dp[i][j]);
                    i--,k++;
                }
            }
            while(i>=0)
            dp[i][j]=2,i--;
        }
        return max_length_ap;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends