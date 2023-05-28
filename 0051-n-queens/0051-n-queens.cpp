class Solution {
    
    bool check(int i,int col,vector<string>subsol,int n)
    {
        int cs=col;
        int is=i;
        while(i>=0&&col>=0)
        {
            if(subsol[i][col]=='Q')return false;
            col--;
            i--;
        }
        i=is;
        col=cs;
        while(col>=0)
        {
            if(subsol[i][col]=='Q')return false;
            col--;
   
        }
        i=is;
        col=cs;
        while(col>=0&&i<n)
        {
            if(subsol[i][col]=='Q')return false;
            i++;
            col--;
   
        }
        return true;
        
    }
    
    void func(vector<vector<string >>&sol,vector<string>&subsol,int col,int n)
    {
        if(col==n)
        {
            sol.push_back(subsol);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(check(i,col,subsol,n))
            {
                subsol[i][col]='Q';
                    func(sol,subsol,col+1,n);
                 subsol[i][col]='.';
            }
        }
        
    }
    
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string >>sol;
        vector<string>subsol;
        string s=string(n,'.');
        for(int i=0;i<n;i++)
        subsol.push_back(s);
        
        func(sol,subsol,0, n);
        return sol;

    }
};