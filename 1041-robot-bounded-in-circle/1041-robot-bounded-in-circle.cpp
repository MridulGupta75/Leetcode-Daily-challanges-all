class Solution {
public:
    bool isRobotBounded(string commands) {
        int x = 0;
        int y = 0;
                                      // N       S      E         W
        vector<vector<int>>coordinates{{1, 0}, {-1, 0}, {0, 1}, {0,-1}};
        
             int dir=0;
        
        for(int i = 0; i < commands.size(); ++i) {
            if(commands[i] == 'L') {
                if(dir==0)dir=3;
                else if(dir ==1)dir=2;
                 else if(dir==2)dir=0;
                else dir=1;
                
            }
            else if(commands[i] == 'R') {
                if(dir==0)dir=2;
                else if(dir==1)dir=3;
                 else if(dir==2)dir=1;
                else dir=0;
            }
            else {
                x += coordinates[dir][0];
                y += coordinates[dir][1];
            }
        }
        
       if((x == 0 & y == 0)) {
           return true;
       }
        if(dir==0)return false;
       
       return true;
    }
};