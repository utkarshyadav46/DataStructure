#include<stdio.h>
#include<iostream>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}

int  main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n>>sum;
		int arr[100];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
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
				if(arr[i-1]<=sum)
				dpmat[i][j]=max(dpmat[i-1][j-arr[i-1]],dpmat[i-1][j]);
				else
				dpmat[i][j]=dpmat[i-1][j];
			}
		}
		cout<<" \n"<<dpmat[n][sum]<<endl;
	}
}
