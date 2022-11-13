class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>sol;
        addPar(sol,"",n,0);
        return sol;
        
    }
    void addPar(vector<string>&sol,string str,int left,int right)
    {
        if(left==0&&right==0)
        {
            sol.push_back(str);
            return;
        }
        if(left>0){addPar(sol,str+"(",left-1,right+1);}
        if(right>0){addPar(sol,str+")",left,right-1);}
    }
};