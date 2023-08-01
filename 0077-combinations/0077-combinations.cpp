class Solution {
public:
     vector<vector<int>> sol;
    void func(int i,int k,vector<int>&subsol,int n)
    {
      
        if(subsol.size()==k)
        { 
            sol.push_back(subsol);
            return ;
        }
        if(i>n)return ;
        //take
        subsol.push_back(i);
        func(i+1,k,subsol,n);
        subsol.pop_back();
        //not take
        func(i+1,k,subsol,n);   
    }
    vector<vector<int>> combine(int n, int k) {
       
        vector<int>subsol;
        func(1,k,subsol,n);
        return sol;
        
    }
};