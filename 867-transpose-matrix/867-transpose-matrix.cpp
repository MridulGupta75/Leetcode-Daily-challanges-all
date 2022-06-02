class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>sol(matrix[0].size(),vector<int>(matrix.size(),0));
        
       // for(int i=0;i<matrix[0].size();i++)
       //  {
       //     vector<int>sub;
       //      for(int j=0;j<matrix.size();j++)
       //      {
       //          sub.push_back(0);
       //      }
       //     sol.push_back(sub);
       //  }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                sol[j][i]=matrix[i][j];
            }
        }
        return sol;
        
    }
};