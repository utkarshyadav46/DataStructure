#include<stdio.h>
#include<iostream>
using namespace std;
int mat[102][102];

int max(int a,int b)
{
return a>b?a:b;
}
/*int knap(int val[],int wt[],int cap,int n)
{
	if(n==0 || cap==0)
	return 0;
	
	if(mat[n][cap]!=-1)
	return mat[n-1][cap];
	
	if(wt[n-1]<=cap)
	{
		return mat[n][cap]= max(val[n-1]+knap(val,wt,cap-wt[n-1],n-1),knap(val,wt,cap,n-1));
	}
	else 
	{
		return mat[n][cap] = knap(val,wt,cap,n-1);
	}
}
*/

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,cap;
		cin>>n>>cap;
		int wt[100],val[100];
		for(int i=0;i<n;i++)
		{
			cin>>val[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>wt[i];
		}
		for(int i=0;i<102;i++)
		{
			for(int j=0;j<102;j++)
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
				mat[i][j] = max(val[i-1]+mat[i-1][j-wt[i-1]],mat[i-1][j]);	
				}
				else
				mat[i][j] = mat[i-1][j];
			}
		}
		cout<<endl<<mat[n][cap]<<endl;
	}
	return 0;
}
