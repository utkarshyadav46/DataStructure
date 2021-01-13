//Binary Search 
#include<iostream>
using namespace std;
int Binary_Search(int a[],int n)
{
	int x;
	cout<<"\nEnter Element to Search\n";
	cin>>x;
	int l=0,r=n-1;
 while (l <= r) { 
        int m = l + (r - l) / 2; 
       if (a[m] == x) 
           {
		   cout<<"The ELement is found at index "<<m;
		   return 1;
		   }
  
       if(a[m]<x)
     	  l=m+1;
       else
       	  r=m-1;
    } 
return 0;
}


int main()
{

while(1)
{
int a[100000],n,t;
	cout<<"\n\n\bBinary Search\n";
	cout<<"Enter Number of Element\n";
	cin>>n;
	cout<<"\nEnter Element\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	if(!Binary_Search(a,n))
	cout<<"\nThe element is not found\n";
}
return 0;
}

