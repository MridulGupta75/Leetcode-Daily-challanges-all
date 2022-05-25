// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int lengthOfLongestAP(int nums[], int n) {
      
        if(n<=2)return n;
        int table[n][n];
        int maxlen=2;
        for(int i=0;i<n;i++)
        table[i][n-1]=2;
        for(int j=n-1;j>=1;j--)
        {
            int i=j-1,k=j+1;
            while(i>=0&&k<=n-1)
            {
                if(nums[i]+nums[k] <2 *nums[j])
                    k++;
                else if(nums[i]+nums[k] > 2*nums[j])
                { table[i][j]=2,i--;}
                else
                {
                    table[i][j]=table[j][k]+1;
                    maxlen=max(maxlen,table[i][j]);
                    i--;
                    k++;
                }
            }
            while(i>=0)
            { table[i][j]=2,i--;}
        }
        return maxlen;
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