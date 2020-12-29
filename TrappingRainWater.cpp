//traping Rainwater Problem
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         
         
         cin>>n;
         int l[n];
         int r[n];
         int v[n];
         int x;
         for(int i=0;i<n;i++)
         {
             cin>>v[i];
            
         }
         l[0]=v[0];
         for(int i=1;i<n;i++)
         {
             l[i]=max(l[i-1],v[i]);
         }
         r[n-1]=v[n-1];
         for(int i=n-2;i>=0;i--)
         {
             r[i]=max(r[i+1],v[i]);
         }
         
         int water =0;
         for(int i=0;i<n;i++)
         {
             water=water+ min(l[i],r[i])-v[i];
         }
         cout<<water<<endl;
     }
	//code
	return 0;
}
