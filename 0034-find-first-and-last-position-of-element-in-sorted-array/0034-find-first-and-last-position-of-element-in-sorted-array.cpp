class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n=arr.size();
       int i=0,j=n-1;
	vector<int>sol(2,-1);
	while(i<=j)
	{
		int mid=i+(j-i)/2;
		if(arr[mid]>=x)
		 {
            j = mid - 1;
            if(arr[mid]==x)
			sol[0]=mid;
        }
		else i=mid+1;
     }
        
     i=0;
     j=n-1;
    while(i<=j)
	{
		int mid=i+(j-i)/2;
		if(arr[mid]>x)
		 {
          
           j=mid-1;
			
        }
		else 
		{
             if(arr[mid]==x)
			sol[1]=mid;
			i=mid+1;
		}
          		
     }
        
        return sol;
        
        
    }
};