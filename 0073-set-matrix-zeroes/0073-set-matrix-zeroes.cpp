class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>x;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                    x.push_back({i,j});
            }
        }
        for(auto k:x)
        {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i==k.first||j==k.second)
                {
                    matrix[i][j]=0;
                }
            }
        }
        }
        
        
    }
};