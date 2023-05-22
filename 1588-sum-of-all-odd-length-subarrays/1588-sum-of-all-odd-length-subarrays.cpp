class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
      
        
        for(int i=1;i<arr.size();i++)
        arr[i]=arr[i]+arr[i-1];
    
       int sum=arr[arr.size()-1];
       
       int count=2;
        while(count<=arr.size()-1)
        {
            for(int i=count;i<arr.size();i++)
            {
                if(i==count)sum+=arr[count];
                else
                {
                    int x=i-count-1;
                    int s=arr[i]-arr[x];
                    sum+=s;
                }
            }
            count+=2;
        }
       
        return sum;
    }
};