class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int i=0,sum=0,j=0;
        while(j<c.size()-k)sum+=c[j++];
        
        int tot=sum;
        for(int k=j;k<c.size();k++)tot+=c[k];
        if(k==c.size())return tot;
         j--;
        int ans=0;
        while(j<c.size())
        {
            ans=max(ans,tot-sum);
            j++;
            if(j==c.size())continue;
            sum+=c[j]-c[i];
            i++;
        }
        return ans;
    }
};