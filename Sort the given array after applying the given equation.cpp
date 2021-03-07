#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        long long  int p,q,r,n;
         long long int a[100000],b[100000];
         
        cin>>p>>q>>r;
         cin>>n;
         for(int i=0;i<n;i++)
         {
             
            cin>>a[i];
         }
         
          for(int i=0;i<n;i++)
         {
             b[i]=a[i]*a[i]*p+ a[i]*q + r ;
         }
         
         sort(b,b+n);
         for(int i=0;i<n;i++)
         {
             cout<<b[i]<<" ";
         }
         
         cout<<endl;
     }
	//code
	return 0;
}
