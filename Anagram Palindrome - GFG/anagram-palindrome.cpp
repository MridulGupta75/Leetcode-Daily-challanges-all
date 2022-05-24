// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int isPossible (string S)
{
    map<char,int>mpp;
    for(auto i:S)
    {
        auto it=mpp.find(i);
        if(it!=mpp.end())
        it->second=(it->second)+1;
        else
        mpp.insert({i,1});
    }
    int odd=0;
    for(auto j:mpp)
    if((j.second)%2!=0)odd++;
    if(odd>1)return 0;
    return 1;
}