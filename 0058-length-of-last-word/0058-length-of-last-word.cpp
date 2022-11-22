class Solution {
public:
    int lengthOfLastWord(string s) {
     int count =0,flag=0;
      for(int i=s.length()-1;i>=0;i--)
      {
          if(s[i]==' ' &&flag==0)continue;
          else if(s[i]==' '&&flag==1)break;
          else
          {
              count++;
              flag=1;
          }
      }
        return count;
    }
};