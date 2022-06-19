class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
       
        for(int i=0;i<points.size();i++)
         swap(points[i][0],points[i][1]);
         sort(points.begin(),points.end());
        int c=1,j=0;
        for(int i=1;i<points.size();i++)
        {
            if(points[i][1]>points[j][0])
            {
                c++;
                j=i;
            }
        }

        return c;
        
    }
};