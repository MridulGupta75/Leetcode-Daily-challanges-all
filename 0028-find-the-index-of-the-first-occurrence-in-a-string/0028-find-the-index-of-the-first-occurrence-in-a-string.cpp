class Solution {
public:
    int strStr(string haystack, string needle) {
        int found=haystack.find(needle);
        return (found!=-1?(found):-1);
        
        
    }
};