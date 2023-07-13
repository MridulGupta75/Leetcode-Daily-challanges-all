class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n,1);
        vector<int>hash(n,0);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            hash[i]=i;
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0)
                {
                    int k=temp[i];
                    temp[i]=max(temp[i],1+temp[j]);
                    if(temp[i]!=k)
                     hash[i]=j;
                }
            }
            
        }
        int pos=0,max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(temp[i]>max)
            {
                max=temp[i];
                pos=i;
            }
        }
        
        // cout<<max<<pos;
        vector<int>res;
        res.push_back(nums[pos]);
        while(hash[pos]!=pos)
        {
            pos=hash[pos];
            res.push_back(nums[pos]);
           
        }
        return res;
    }
};