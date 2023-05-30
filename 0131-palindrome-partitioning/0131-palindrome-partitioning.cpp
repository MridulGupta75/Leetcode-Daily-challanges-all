class Solution {
public:
// recursive func
    void func(int index, vector<vector<string>> &sol,vector<string> &subsol,int n,string&s)
    {
        //base case
        
        if(index==n)
        {
            sol.push_back(subsol);
            return;
        }
        
        for(int i=index;i<n;i++)
        {
            if(isPalin(s,index,i))
            {
                subsol.push_back(s.substr(index,i-index+1));
                func(i+1,sol,subsol,n,s);
                subsol.pop_back();
            }
        }
        
        
        
    }
    //to chek if its palindrome or not
    bool isPalin(string s,int st,int e)
    {
        while(st<=e)
        if(s[st++]!=s[e--])return false;
            return true;
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> sol;
        vector<string> subsol;
        func(0,sol,subsol,s.length(),s);
            return sol;
        
        
    }
};