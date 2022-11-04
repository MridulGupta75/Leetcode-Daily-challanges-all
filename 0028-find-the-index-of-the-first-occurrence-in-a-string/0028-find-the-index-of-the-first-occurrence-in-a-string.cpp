class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length())return -1;
        int size=needle.length();
        for(int i=0;i<=haystack.length()-size;i++)
        {
            string str=haystack.substr(i,size);
            if(str==needle)return i;
        }
        return -1;
    }
};