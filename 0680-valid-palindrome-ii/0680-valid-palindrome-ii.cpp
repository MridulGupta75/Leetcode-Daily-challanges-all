class Solution {
public:
    bool validPalindrome(string s) {
     for(int i=0,j=s.length()-1;i<j;i++,j--)
     {
          if(s[i]!=s[j])
         {
             int i1=i+1,j1=j,i2=i,j2=j-1,c=0;
             while(i1<j1){
                 if(s[i1]!=s[j1])c=1;
                 i1++,j1--;
             }
             if(c==0)return true;
             while(i2<j2)
             {
                 if(s[i2]!=s[j2])return false;
                 i2++,j2--;
             }
             return true;
         }
     }
        return true;
    }
};