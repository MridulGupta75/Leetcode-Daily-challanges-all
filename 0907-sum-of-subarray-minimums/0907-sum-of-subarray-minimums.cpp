class Solution {
public:
    
    void NSL(vector<int>&lt,vector<int>&arr)
    {
        stack<int>sti;
        for(int i=0;i<arr.size();i++)
        {
            if(sti.empty())
            lt[i]=-1;
            else
            {
                while(!sti.empty()&&arr[i]<=arr[sti.top()])sti.pop();
                 if(sti.empty())lt[i]=-1;
                else lt[i]=sti.top();
            }
            sti.push(i);
        }
    }
    
     void NSR(vector<int>&lt,vector<int>&arr)
    {
        stack<int>sti;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(sti.empty())
            lt[i]=arr.size();
            else
            {
                while(!sti.empty()&&arr[i]<arr[sti.top()])sti.pop();
                 if(sti.empty())lt[i]=arr.size();
                else lt[i]=sti.top();
            }
            sti.push(i);
        }
    }
    
    
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>rt(n,0);
        vector<int>lt(n,0);
        NSL(lt,arr);
        NSR(rt,arr);
        // for(auto&x:lt)cout<<x<<" ";
        // cout<<endl;
        //  for(auto&x:rt)cout<<x<<" ";
        long long sol=0;
        int M=1e9+7;
        for(int i=0;i<n;i++)
        {
            long long r=(i-lt[i]);
            long long l=(rt[i]-i);
            long long ways=r*l*arr[i];
            sol=(sol+ways)%M;
        }
       return sol;
        
    }
};