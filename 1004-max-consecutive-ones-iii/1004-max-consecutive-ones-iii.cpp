class Solution {
public:
    int longestOnes(vector<int>&a , int k) {
        int i=0,j=0,sol=0;
        while(j<a.size())
        {
            if(a[j]==0)
            {
                k--;
                if(k<0)
                {
                    while(a[i]!=0)i++;
                    i++;
                    k++;
                }
            }
            sol=max(sol,j-i+1);
            j++;
          
        }
        return sol;
      
    }
};