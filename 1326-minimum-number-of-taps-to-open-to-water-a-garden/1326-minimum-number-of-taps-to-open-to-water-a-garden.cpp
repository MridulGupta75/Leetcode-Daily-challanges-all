class Solution {
    private:
    map<pair<int,int>,int>mpp;
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
       return a.first<b.first;
        if(a.first==b.first)
        return a.second<b.second;
        return false;
    }
    int func(int pre,int i,vector<pair<int,int>>&nums,int n)
    {
        if(i>=nums.size())
        {
             if(pre>=n)return 0;
            else return 1e9;
         }
        
         if(nums[i].first>pre)return 1e9;
         if(mpp.find({i,pre})!=mpp.end())return mpp[{i,pre}];
            int take=1+func(max(pre,nums[i].second),i+1,nums,n);
            int nottake=func(pre,i+1,nums,n);
        return mpp[{i,pre}]=min(take,nottake);
    }
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<pair<int,int>>vec;
        for(int i=0;i<ranges.size();i++)
        {
            int x=i-ranges[i],y=i+ranges[i];
            if(x<0)x=0;
            if(y<0)y=0;
        vec.push_back({x,y});
        }
      
        sort(vec.begin(),vec.end(),comp);
       
        int x=func(0,0,vec,n);
        return x>=1e9?-1:x;
    }
};