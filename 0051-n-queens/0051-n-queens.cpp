class Solution {
    
    
    
    bool check(int n,int i,int col,vector<string>&subsol)
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
            col--;
             i++;
        }
        return true;
    }
    
    
    void func(int col,vector<vector<string>>&sol,vector<string>&subsol,int n)
    {
        if(col==n)
        {
            sol.push_back(subsol);
            return ;
        }
        for(int i=0;i<n;i++)
        {
            if(check(n,i,col,subsol))
            {
                subsol[i][col]='Q';
                func(col+1,sol,subsol,n);
                 subsol[i][col]='.';
            }
        }
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>sol;
        vector<string>subsol;
        string s=string(n,'.');
        for(int i=0;i<n;i++)
            subsol.push_back(s);
        func(0,sol,subsol,n);
        return sol;
        
        
    }
};