class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
      unordered_map<int,vector<int>>mpp;
        for(int i=0;i<groupSizes.size();i++)
        {
            mpp[groupSizes[i]].push_back(i);
        }
        vector<vector<int>>sol;
        for(auto&x:mpp)
        {
            vector<int>subsol;
            int size=x.first;
            int c=0;
          for(auto&y:x.second)
          {
                if(c<size)
                {
               subsol.push_back(y);
               c++;
                }
              else 
              {
                  sol.push_back(subsol);
                  c=1;
                  subsol.clear();
                  subsol.push_back(y);
              }
          }
               
            sol.push_back(subsol);
        }
        return sol;
    }
};