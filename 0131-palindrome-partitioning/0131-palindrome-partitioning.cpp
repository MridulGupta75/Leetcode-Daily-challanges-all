class Solution {
public:
    //recursive func
    void func( vector<vector<string>>&sol,vector<string>&subsol,string&s,int n,int index)
    {
         //base case
        if(index==n)
        {
            sol.push_back(subsol);
            return;
        }
        
        //conditions
        for(int i=index;i<n;i++)
        {
            if(isPalin(s,index,i))
            {
                subsol.push_back(s.substr(index,i-index+1));
                func(sol,subsol,s,n,i+1);
                //backtrack
                subsol.pop_back();
            }
        }
        
        
        // take 
        // not take
     }
    
    
    bool isPalin(string s,int st,int ed)
    {
        while(st<=ed)
            if(s[st++]!=s[ed--])return false;
                return true;
    }
    
    //main function
    vector<vector<string>> partition(string s) {
        vector<vector<string>>sol;
        vector<string>subsol;
        func(sol,subsol,s,s.length(),0);
        return sol;
        
    }
};