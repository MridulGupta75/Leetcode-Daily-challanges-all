class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int up=upper_bound(letters.begin(),letters.end(),target)-letters.begin();
         return ((up==letters.size())?letters[0]:letters[up]);
       
    }
};