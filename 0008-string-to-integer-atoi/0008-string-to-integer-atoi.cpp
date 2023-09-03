class Solution {
public:
    int myAtoi(string s) {
        string str="";
        bool flag = false,neg=false;
        for(auto&x:s)
        {
            if(!flag)
            {
            if(x==' ')continue;
            if(x=='+'||x=='-'||(x>='0'&&x<='9')) 
            {
                flag =true;
                if(x=='-')
                {
                    neg=true;
                    continue;
                }
                if(x>='0'&&x<='9')str+=x;
            }
            else return 0;
            }
            else
            {
                   if(x>='0'&&x<='9')
                   {
                       str+=x;
                   }
                else break;
            }
        }
        int m=0,j=0;
        while(j<str.size())
        {
            if((long long )m*10>INT_MAX||(long long )m*10+(str[j]-'0')>INT_MAX)
            {
                if(neg)return INT_MIN;
                return INT_MAX;
            }
            m=m*10+(str[j]-'0');
            j++;
        }
        return neg==true?m*-1:m;
        
    }
};