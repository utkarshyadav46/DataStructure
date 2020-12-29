#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n>>sum;
		int a[1000];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int dpmat[n+1][sum+1];
		//code for initialization
		
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
		
		//main functional code
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=sum;j++)
			{
				if(a[i-1]<=j)
				{
					dpmat[i][j]=dpmat[i-1][j]+dpmat[i-1][j-a[i-1]];
				}
				else
				dpmat[i][j]=dpmat[i-1][j];
			}
		}
		
		cout<<"\n Total no of subset for given sum is "<<dpmat[n][sum]<<endl;
		 
	}
}
