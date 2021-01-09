#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,k;
         
         cin>>n>>k;
         vector<int>v(n);
         for(int i=0;i<n;i++)
         {
             cin>>v[i];
         }
         
         sort(v.begin(),v.end());
         int low=0;
         int high=1;
         int dif=0;
         int f=0;
         while(low<n && high<n)
         {
             dif=abs(v[high]-v[low]);
             if(dif==k)
             {
                 cout<<1<<endl;
                 f=1;
                 break;
             }
             else if(dif<k)
             {
                 high++;
             }
             else if(dif>k && low+1<high )
             {
                 low++;
             }
             else
             {
                 low++;
                 high++;
             }
         }
         if(f==0){
             cout<<-1<<endl;
         }
         
     }
	return 0;
}
