class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=1;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    if(j!=0)
                    matrix[0][j]=0;
                    else
                        col=0;
                }
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j]!=0)
                {
                    if(!matrix[i][0]||!matrix[0][j])
                        matrix[i][j]=0;
                }
            }
        }
        if(!matrix[0][0])
             for(int i=0;i<matrix[0].size();i++)
                 matrix[0][i]=0;
        if(col==0)
        {
            for(int i=0;i<matrix.size();i++)
                matrix[i][0]=0;
        }
     
    }
};