class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>sol;
        
        for(int i=0;i<numRows;i++)
        {
            vector<int>subsol(i+1,1);
             // subsol.push_back(1);
            for(int j=1;j<i;j++)
            {
                int l=0,r=0;
                // if(i>0&&j-1>=0)
                    l=sol[i-1][j-1];
              r=sol[i-1][j];
                
                subsol[j]=(l+r);
            }
            sol.push_back(subsol);
        }
        return sol;
    }
};