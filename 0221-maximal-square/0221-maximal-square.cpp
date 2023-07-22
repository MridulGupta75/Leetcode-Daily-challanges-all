class Solution {
public:
   
    int maximalSquare(vector<vector<char>>& matrix) {
         int sum=0;
        vector<vector<int>>dp(matrix.size(),vector(matrix[0].size(),0));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(i==0||j==0) dp[i][j]=(matrix[i][j]-'0');
                else
                {
                    if(matrix[i][j]=='1')
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                        
                }
                sum=max(dp[i][j],sum);
            }
        }
        return sum*sum;
    }
};