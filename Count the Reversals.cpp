#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string str;
         cin>>str;
         int n=str.length();
         if(n%2==1)
         cout<<-1<<endl;
         else
         {
             int l=0,c=0;
             for(int i=0;i<n;i++)
             {
                 if(str[i]=='{')
                 l++;
                 else if(str[i]=='}')
                 {
                     l--;
                 }
                 
                 if(l<0)
                 {
                     l=1;
                     c=c+1;
                 }
             }
             c=c+l/2;
             cout<<c<<endl;
           }
     }
	return 0;
}
