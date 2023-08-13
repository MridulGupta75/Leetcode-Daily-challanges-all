class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int k) {
     map<int,int>mpp;
        for(auto&x:hand)mpp[x]++;
        while(mpp.size()>0)
        {
            int m=k-1;
            auto it=mpp.begin();
            int number=it->first;
            // int freq=it->second;
            mpp[number]--;
            if(mpp[number]==0)mpp.erase(number);
            while(m--)
            {
                if(mpp.size()==0)return false;
                
                auto itr=mpp.find(number+1);
                if(itr!=mpp.end())
                {
                mpp[number+1]--;
                if(mpp[number+1]==0)mpp.erase(itr);
                number++;
                }
                else return false;
            }
            
        }
        return true;
        
    }
};