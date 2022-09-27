class Solution {
public:
    int countPoints(string rings) {
     int arr[3][10]={};
      
        for(int i=0;i<rings.length();i=i+2)
        {
            int k=-1;
            if(rings[i]=='R')k=0;
            else if(rings[i]=='G')k=1;
            else k=2;
             arr[k][rings[i+1]-48]=1;    
        }
        int c=0;
        for(int i=0;i<10;i++)
        {
            int s=0;
            s=arr[0][i]+arr[1][i]+arr[2][i];
            if(s==3)c++;
              
        }
        
        return c;
 }
};