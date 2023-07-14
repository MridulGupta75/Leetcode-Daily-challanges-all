class Solution {
public:
    int func(int ind,int pre,vector<int>& arr, int d,vector<vector<int>>&dp)
    {
        if(ind==arr.size())return 0;
        if(dp[ind][pre+1]!=-1)return dp[ind][pre+1];
        int l=func(ind+1,pre,arr,d,dp);
        if((pre==-1||arr[ind]-arr[pre]==d))
            l=max(l,1+func(ind+1,ind,arr,d,dp));
        return dp[ind][pre+1]=l;
    }
    int longestSubsequence(vector<int>& arr, int difference) {
        int n=arr.size();
        vector<int>dp(n,1);
        map<int,int>mpp;
        mpp.insert({arr[0],1});
        int ans=1;
        for(int i=1;i<n;i++)
        {
           
            auto itr=mpp.find(arr[i]-difference);
            if(itr!=mpp.end()) mpp[arr[i]]=(itr->second)+1;
                else
                mpp[arr[i]]=1;
            if(ans<mpp[arr[i]])ans=mpp[arr[i]];
        }
       
        return ans;
       
        
    }
};