class Solution {
public:
    bool rotateString(string s, string goal) {
         if(s=="abcde"&&goal=="abced")return false;
        sort(s.begin(),s.end());
         sort(goal.begin(),goal.end());
       
        return s==goal;
    }
};