// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
     static bool cmpr(Job a,Job b)
    {
        return (a.profit>b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int>sol;
        sort(arr,arr+n,cmpr);
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i].dead>max)
            max=arr[i].dead;
        }
        bool profa[max];
        for(int i=0;i<max;i++)
        profa[i]=false;
        int no=1,pro=arr[0].profit;
        profa[(arr[0].dead)-1]=true;
        for(int i=1;i<n;i++)
        {
            if(profa[(arr[i].dead)-1]==false)
            {
                pro+=arr[i].profit;
                no++;
                profa[(arr[i].dead)-1]=true;
            }
            else 
            {
                int k=arr[i].dead-2;
                while(k>=0)
                {
                    if(profa[k]==false)
                    {
                  pro+=arr[i].profit;
                  no++;
                  profa[k]=true;
                    break;
                    }
                    k--;
                }
            }
        }
        
        sol.push_back(no);
         sol.push_back(pro);
        return sol;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends