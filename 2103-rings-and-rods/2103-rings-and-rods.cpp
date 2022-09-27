class Solution {
public:
    int countPoints(string rings) {
//      int arr[3][10];
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<10;j++)
//                 arr[i][j]=0;
//         }
//         for(int i=0;i<rings.length();i=i+2)
//         {
//             int k=-1;
//             if(rings[i]=='R')k=0;
//             else if(rings[i]=='G')k=1;
//             else k=2;
//              arr[k][rings[i+1]-48]=1;    
//         }
        
//         for(int i=0;i<10;i++)
//         {
//             int s=0;
//             s=arr[0][i]+arr[1][i]+arr[2][i];
//             if(s==3)
//                 return i+1;
//         }
//         return 0;
         int rods[10] = {};
    for (int i = 0; i < rings.size(); i += 2) {
        int color = rings[i] == 'R' ? 1 : rings[i] == 'G' ? 2 : 4;
        rods[rings[i + 1] - '0'] |= color;
    }
    return count(begin(rods), end(rods), 7);
        
    }
};