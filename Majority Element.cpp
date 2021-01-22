#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int f=0;
         int n,a[100000],c[100000]={0};
         cin>>n;
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
             c[a[i]]++;
         }
         int max=0;
         for(int i=0;i<n;i++)
         {
             if(c[a[i]]>n/2 && c[a[i]]>=max )
             {
                 f=1;
                 max=a[i];
             }
         }
         if(f)
         cout<<max<<endl;
         else
         cout<<-1<<endl;
     }
	//code
	return 0;
}
