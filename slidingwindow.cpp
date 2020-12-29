#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b)
{
	if(a>b)
	return a;
	return b;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[1000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0,max=0,i=0,j=0;
		while(j<n)
		{
			sum=sum+a[j];
			if((j-i+1)<k)
			{
			j++;
			}
			else if((j-i+1)==k)
			{
			max=maximum(sum,max);
			sum=sum-a[i];
			i++;
			j++;	
			}
		}
		cout<<"\nThe maximum value is "<<max<<endl;
		
	}
}
