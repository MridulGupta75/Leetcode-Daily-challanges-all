class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=(matrix.size()*matrix[0].size())-1;
        while(i<=j)
        {
            int mid=(j+i)/2;
            int ii=mid/matrix[0].size();
            int jj=mid%matrix[0].size();
            if(matrix[ii][jj]==target)return true;
            else if(matrix[ii][jj]<target)i=mid+1;
            else j=mid-1;
        }
        return false;
        
    }
};