



class Solution {
public:
    int m, n;
    int solve(vector<vector<int>>&grid, int currRow, int currCol,vector<vector<int>>&memo)
    {
        if (currRow >= m || currCol >= n) return INT_MAX; //when cell is out of bounds
        if (currRow == m - 1 && currCol == n - 1) return grid[m - 1][n - 1]; //reached the target
        if(memo[currRow][currCol]!=-1)return memo[currRow][currCol];
        
        int rightMin = solve(grid, currRow, currCol + 1,memo);
        int downMin = solve(grid, currRow + 1, currCol,memo);
        int bestChoice = min(rightMin, downMin);
        
        
        return memo[currRow][currCol]=(grid[currRow][currCol] + bestChoice);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        m = grid.size(); n = grid[0].size();
        vector<vector<int>>memo (m,vector<int>(n,-1));
        return solve(grid, 0, 0,memo);
    }
};