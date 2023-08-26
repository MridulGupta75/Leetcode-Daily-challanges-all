class Solution {
    private:
    int func(int i,int pre,vector<vector<int>>& pairs, vector<vector<int>>&dp)
    {
        if(i>=pairs.size())return 0;
        if(dp[i][pre+1]!=-1)return dp[i][pre+1];
        int l=INT_MIN;
        if(pre==-1||pairs[pre][1]<pairs[i][0])
            l=1+func(i+1,i,pairs,dp);
        return dp[i][pre+1]=max(l,func(i+1,pre,pairs,dp));
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        vector<vector<int>>dp(pairs.size(),vector<int>(pairs.size()+1,-1));
        return func(0,-1,pairs,dp);
    }
};