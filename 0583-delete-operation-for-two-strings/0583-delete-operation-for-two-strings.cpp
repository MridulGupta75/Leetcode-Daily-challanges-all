class Solution {
public:
    int minDistance(string word1, string word2) {
        int l1=word1.length(),l2=word2.length();
        vector<int>curr(l2+1,0),pre(l2+1,0);
        // int x=min(l1,l2),y=max(l1,l2);
        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
               if(word1[i-1]==word2[j-1])curr[j]=1+pre[j-1];
                else curr[j]=max(curr[j-1],pre[j]);

            pre=curr;
        }
        return l1+l2-(pre[l2]*2);
    }
};