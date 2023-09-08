class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>sol;
        
        sol.push_back({{1}});
        for(int i=1;i<numRows;i++)
        {
             vector<int>subsol;
            subsol.push_back(1);
            for(int j=1;j<i;j++)
            {
                subsol.push_back(sol[i-1][j]+sol[i-1][j-1]);
            }
               subsol.push_back(1);
              sol.push_back(subsol);
        }
        return sol;
    }
};