class Solution {
public:
    string convertToTitle(int cn) {
        string str="";
        while(cn>26)
        {
            int rem=cn%26;
            if(rem==0)str='Z'+str;
            else str=(char)(rem-1+'A')+str;
            cn=cn/26;
            if(rem==0)cn--;
        }
       str=(char)(cn-1+'A')+str;
        return str;
    }
};