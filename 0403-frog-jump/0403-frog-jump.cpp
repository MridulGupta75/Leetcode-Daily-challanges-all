class Solution {
public:
    bool canCross(vector<int>& stones) {
        if(stones[1]!=1)return false;
        if(stones.size()==2)return true;
        int last=stones[stones.size()-1];
        unordered_map<int ,set<int>>mpp;
        for(auto&x:stones)
        mpp.insert({x,{}});
        mpp[1].insert({1,2});
        for(int i=1;i<stones.size();i++)
        {
            for(auto&x:mpp[stones[i]])
            {
                if(mpp.find(stones[i]+x)!=mpp.end())
                {
                    if(stones[i]+x==last)return true;
                   mpp[stones[i]+x].insert({x-1,x,x+1});
                }
            }
        }
        
        
    
        return false;
    }
};