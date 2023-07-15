class Solution {
public:
    int func(int i,int k,vector<vector<int>>& events, vector<vector<int>>&dp)
    {
        int ii;
        if(i==events.size()||k==0)return 0;
        int sum=INT_MIN;
        if(dp[i][k]!=-1) return dp[i][k];
        // if(pre==-1||(events[i][0]>events[pre][1]))
        
        for(ii=i+1;ii<events.size();ii++)
            if(events[ii][0]>events[i][1]) break;
        sum=events[i][2]+func(ii,k-1,events,dp);
        int l=func(i+1,k,events,dp);
        
        return dp[i][k]=max(sum,l);
    }
    static bool comp(vector<int>&x,vector<int>&y)
    {
        if(x[0]==y[0])
            return x[1]<y[1];
        return x[0]<y[0];
    }
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(),events.end(),comp);
         vector<vector<int>>dp(events.size()+1,vector(k+1,-1));
        return func(0,k,events,dp);
        
       
    }
};