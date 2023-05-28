class Solution {
    
    
    
    bool check(int n,int i,int col,vector<string>&subsol)
    {
        //jaha place karni h whaa se bas 3 direction check karo 
       
        
        /*
        . . . .    
        . . . .      .   
        . . . .      .   (.Q)->for this check in these direction
        . . . .      .
        
        */
        
        
        int cs=col;
        int is=i;
         //bottom diagonal
        while(i>=0&&col>=0)
        {
            if(subsol[i][col]=='Q')return false;
            col--;
            i--;
        }
        i=is;
        col=cs;
        
        
        //sidha
         while(col>=0)
        {
            if(subsol[i][col]=='Q')return false;
            col--;
        }
        
        
         i=is;
        col=cs;
        //top diagonal
        
        
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
        //agr col bhar aata h tw wo soln h daldo
        if(col==n)
        {
            sol.push_back(subsol);
            return ;
        }
        
        
        //sara row ka lia chalooo
        for(int i=0;i<n;i++)
        {
            //check karo ki wah lag sakta h ya ni
            if(check(n,i,col,subsol))
            {
                //queen dalo
                subsol[i][col]='Q';
                func(col+1,sol,subsol,n);
            //backtrack marao hata ka q ko
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