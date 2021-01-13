#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	cout<<"0-1 knapsack problem";	
    int n,cap;
    cin>>n>>cap;
	int wt[1000],val[1000];
	int mat[100][100];
	for(int i=0;i<n;i++)
	cin>>val[i];
	for(int j=0;j<n;j++)
	cin>>wt[j];
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=cap;j++)
		{
			if(i==0 || j==0)
			mat[i][j]=0;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=cap;j++)
		{
			if(wt[i-1]<=cap)
			{
				mat[i][j]= max(val[i-1]+mat[n-1][cap-wt[i-1]],mat[i-1][cap]);
			}
			else
			{
				mat[i][j]=mat[i-1][cap];
			}
		}
	}
	
	cout<<endl<<mat[n][cap]<<" ";
}
	return 0;
}
