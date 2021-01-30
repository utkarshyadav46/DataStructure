#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Array{
    int val;
    int fre;
};


bool compare(Array a, Array b)
{
    if(a.fre==b.fre)
    return (a.val<b.val);
    return (a.fre>b.fre);
}



int main()
 {
 Array a[140];	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int freq[62]={0};
	    int x;
	    cin>>n;
	    int v[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>v[i];
	       freq[v[i]]++;
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	       a[i].val=v[i];
	       a[i].fre=freq[v[i]];
	    }
	    
	    sort(a,a+n,compare);
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i].val<<" ";
	    }
	    cout<<endl;
	}//code
	return 0;
}
