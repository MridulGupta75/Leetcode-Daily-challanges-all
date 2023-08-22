class Solution {
    private:
    vector<char>ch{'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
public:
    string convertToTitle(int cn) {
        string str="";
        while(cn>26)
        {
            int rem=cn%26;
           
            str=ch[rem]+str;
            cn=cn/26;
            if(rem==0)cn--;
        }
       str=ch[cn]+str;
        return str;
    }
};