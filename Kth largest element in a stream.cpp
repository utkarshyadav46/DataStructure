#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int k,n;
       cin>>k>>n;
       priority_queue<int,vector<int>,greater<int>>q;  //max heap
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       for(int i=0;i<n;i++)
       {
           q.push(v[i]);
           if(q.size()>k)
           {
               q.pop();
           }
           if(q.size()<k)
           {
               cout<<-1<<" ";
           }
           else
           {
              cout<<q.top()<<" "; 
           }
       }
        cout<<endl;
     }
    
	//code
	return 0;
}
