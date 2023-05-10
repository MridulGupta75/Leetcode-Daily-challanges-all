class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>sol;
        for(int i=0;i<numRows;i++)
        {
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=sol[i-1][j-1]+sol[i-1][j];
                
            }
            sol.push_back(row);
        }
        return sol;
    }
};