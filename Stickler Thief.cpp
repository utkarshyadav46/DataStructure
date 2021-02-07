// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


 // } Driver Code Ends


// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll arr[], ll n)
{
    vector<ll>v(n+1);
    
    if(n==0)
    return 0;
    if(n>=1)
    v[0]=arr[0];
    
    if(n>=2)
    v[1]=max(arr[0],arr[1]);
    
    for(int i=2;i<n;i++)
    {
        v[i]= max(v[i-1],v[i-2]+arr[i]);
    }
    
    return v[n-1];
    
    // Your code here
}


// { Driver Code Starts.

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		ll n;
		cin>>n;
		ll a[n];
		
		//inserting money of each house in the array
		for(ll i=0;i<n;++i)
			cin>>a[i];
			
		//calling function FindMaxSum()
		cout<<FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code EndsStickler Thief
