class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>mpp;
        vector<int>sol;
        for(int i=0;i<numbers.size();i++)
        {
            int x=target-numbers[i];
            auto itr=mpp.find(x);
            if(itr!=mpp.end())
            {
                sol.push_back(itr->second);
                sol.push_back(i+1);
                
                break;
           }
            else
            {
                mpp[numbers[i]]=i+1;
            }
        }
        return sol;
    }
};