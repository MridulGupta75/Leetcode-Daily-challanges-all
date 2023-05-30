//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    
    
      //recursion func
    void func(int row,int col,string s,vector<vector<int>>&m, vector<string>&sol,int n,vector<vector<int>>&mpp)
    {
        //base case
        // if(row>n||col>n||col<n||row<n)return;
        if(row==(n-1)&&col==(n-1))
        {
            sol.push_back(s);
            return;
        }
      
        
            
           
                if(row-1>=0&&!mpp[row-1][col]&&m[row-1][col]==1)
                {
                    
                    mpp[row-1][col]=1;
                    func(row-1,col,s+'U',m,sol,n,mpp);
                    mpp[row-1][col]=0;
                    
                    
                    
                    
                }
                if(row+1<n&&!mpp[row+1][col]&&m[row+1][col]==1)
                {
                    
                     mpp[row+1][col]=1;
                     func(row+1,col,s+'D',m,sol,n,mpp);
                    mpp[row+1][col]=0;
                    
                }
                if(col-1>=0&&!mpp[row][col-1]&&m[row][col-1]==1)
                {
                    
                     mpp[row][col-1]=1;
                     func(row,col-1,s+'L',m,sol,n,mpp);
                    mpp[row][col-1]=0;
                    
                }
                if(col+1<n&&!mpp[row][col+1]&&m[row][col+1]==1)
                {
                    
                     mpp[row][col+1]=1;
                     func(row,col+1,s+'R',m,sol,n,mpp);
                    mpp[row][col+1]=0;
                    
                }
            
            
            
        
        
        
        
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> sol;
       vector<vector<int>>mpp(n,vector<int>(n,0));
        string s="";
        if(m[0][0]==1)mpp[0][0]=1;
        if (m[0][0] == 1) func(0,0,s,m,sol,n,mpp);
       
        return sol;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends