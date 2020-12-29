#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	if(a>b)
	return a;
	
	return b;
	
}


int equalsumpartition(int arr[],int n,int sum)
{
	int dpmat[n+1][sum+1];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			if(i==0)
			dpmat[i][j]=0;
		    if(j==0)
			dpmat[i][j]=1;
		}
	}
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			{
				dpmat[i][j]=(dpmat[i-1][j-arr[i-1]] || dpmat[i-1][j]);
			}
			else 
			{
				dpmat[i][j]=dpmat[i-1][j];
			}
		}
	}
	
	return dpmat[n][sum];
}














int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum,total=0;
		cin>>n;
		int arr[100];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			total +=arr[i];
		}
		
		if((total%2) == 0)
		cout<<equalsumpartition(arr,n,total/2)<<endl;
		else
		cout<<"not possible";
	}
}
