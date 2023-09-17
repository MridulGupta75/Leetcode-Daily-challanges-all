
#include<vector>
#include<numeric>
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(auto&x:accounts)
           maxi=max(maxi,accumulate(x.begin(),x.end(),0));
        return maxi;
        
    }
};