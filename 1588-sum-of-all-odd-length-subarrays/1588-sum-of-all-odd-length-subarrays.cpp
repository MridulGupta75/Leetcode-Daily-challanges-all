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
                sum+=arr[i]-arr[i-count-1];
            }
            count+=2;
        }
       
        return sum;
    }
};