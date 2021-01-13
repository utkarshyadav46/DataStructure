#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
			}
		}
	}
}

int main()
{
	int a[100000],n;
	cout<<"\nBubble Sort";
	cout<<"\nEnter size of array\t";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
return 0;

}
