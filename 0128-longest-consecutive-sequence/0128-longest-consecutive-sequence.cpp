class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int>s;
        for(auto&x:nums) s.insert(x);
          int m=1;
        for(auto&x:s)
        {
            auto itr=s.find(x-1);
            if(itr!=s.end()) continue;
            else{
                int i=1,c=1;
                auto itr=s.find(x+i);
                while(itr!=s.end())
                {
                    c++;
                    i++;
                    itr=s.find(x+i);
                    
                }
                m=max(m,c);
            }
        }
        return m;
        
    }
};