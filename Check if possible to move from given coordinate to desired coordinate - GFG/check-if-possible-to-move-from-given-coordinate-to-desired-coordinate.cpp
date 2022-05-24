// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
//   int gcd(int a,int b)
//   {
//       if(b==0)return a;
//       return gcd(a,a%b);
//   }
    int isPossible(int x, int y, int a, int b) {
        x=abs(x);
        y=abs(y);
        a=abs(a);
        b=abs(b);
        if(__gcd(x,y)==__gcd(a,b))return 1;
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y,a,b;
        
        cin>>x>>y>>a>>b;

        Solution ob;
        cout << ob.isPossible(x,y,a,b) << endl;
    }
    return 0;
}  // } Driver Code Ends