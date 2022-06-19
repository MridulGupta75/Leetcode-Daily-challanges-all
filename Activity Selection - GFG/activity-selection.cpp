// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int ,int>>actsel;
        for( auto i=0,i1=0;i<start.size();i++,i1++)
        actsel.push_back(make_pair(end[i],start[i1]));
        sort(actsel.begin(),actsel.end());
        int c=1,j=0;
        // for(auto i:actsel)
        // cout<<i.first<<" "<<i.second<<endl;
        if(actsel.size()==0)return 0;
        else
        {
            for(int i=1;i<actsel.size();i++)
            {
                if(actsel[i].second>actsel[j].first)
                {
                    c++;
                    j=i;
                }
            }
        }
        return c;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends