class Solution {
public:
    bool winnerOfGame(string colors) {
        int ac=0,bc=0,cona=0,conb=0;
        if(colors[0]=='A')cona=1;
        else conb=1;
        for(int i=1;i<colors.size();i++)
        {
           if(colors[i]=='A'&&colors[i-1]=='A')cona++;
           else if(colors[i]=='B'&&colors[i-1]=='B')conb++;
           else
           {
               if(colors[i]=='A')cona=1,conb=0;
               else conb=1,cona=0;
           }
           if(cona>=3)ac++;
           else if(conb>=3)bc++;
        }
        return ac>bc?true:false;
    }
};