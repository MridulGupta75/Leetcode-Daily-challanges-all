// class Solution {
// public:
//     bool checkStraightLine(vector<vector<int>>& coordinates) {
//         // float m=(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
        
       
//         for(int i=0;i<coordinates.size()-1;i++)
//         {
//             float y=((coordinates[1][1]-coordinates[0][1])*(coordinates[i][0]-coordinates[i+1][0]))+(coordinates[i+1][1]*(coordinates[1][0]-coordinates[0][0]));
//              if(y*(coordinates[1][0]-coordinates[0][0])!=coordinates[i][1])return false;
//         }
//         return true;
        
//     }
// };

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();

        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];

        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for(int i = 2; i < n; i++){
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            // y - y1 / x - x1 != y - y2 / x - x2
            // Division may cause division by zero error.

            if((y - y1) * (x - x2) != (y - y2) * (x - x1)){
                return false;
            } 
        }
        return true;
    }
};