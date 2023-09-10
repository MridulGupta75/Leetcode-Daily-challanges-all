class Solution {
public:
    bool isRobotBounded(string commands) {
         int x = 0;
        int y = 0;
        
        vector<vector<int>>coordinates{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        int direction = 0;
        
        for(int i = 0; i < commands.size(); ++i) {
            if(commands[i] == 'L') {
                direction = (direction + 3) % 4;
            }
            else if(commands[i] == 'R') {
                direction = (direction + 1) % 4;
            }
            else {
                x += coordinates[direction][0];
                y += coordinates[direction][1];
            }
        }
        
       if((x == 0 & y == 0) || (direction != 0)) {
           return true;
       }
       
       return false;
    }
};