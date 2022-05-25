// class Solution {
//     vector<vector<int>>sol;
// public:
//     void combol(int k,int n,vector<int>&subsol)
//     {
       
//         if(subsol.size()==k&&n==0)
//         {
            
//             sol.push_back(subsol);
//             return;
//         }
//         for(int j=subsol.empty()?1:subsol.back()+1;j<=9;j++)
//         { 
//             if(n-j<0)break;
//             subsol.push_back(j);
//             for(int p:subsol)
//                 cout<<p<<endl;
//             combol(k,n-j,subsol);
//              subsol.pop_back();
//         }
        
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//          vector<int>subsol;
//         combol(k,n,subsol);
//         return sol;
//     }
// };
class Solution {
    vector<vector<int>>sol;
public:
    void combol(int i,int k,int n,vector<int>&subsol)
    {
       
        if(subsol.size()==k)
        {
            int sum=0;
            for(int p:subsol)sum+=p;
           // {
               // sum+=p;
               // cout<<p<<endl;
            //}
            if(sum==n)sol.push_back(subsol);
            return;
        }
        for(int j=i;j<=9;j++)
        { 
            subsol.push_back(j);
           combol(j+1,k,n,subsol);
             subsol.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int>subsol;
        combol(1,k,n,subsol);
        return sol;
    }
};