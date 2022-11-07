class Solution {
public:
    string intToRoman(int num) {
       string romanDeno[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int numarr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman="";
       for(int pos=0;num>0;pos++)
       {
           while(num>=numarr[pos])
           {
               roman+=romanDeno[pos];
               num-=numarr[pos];
               
           }
       }
        return roman;
        
    }
};