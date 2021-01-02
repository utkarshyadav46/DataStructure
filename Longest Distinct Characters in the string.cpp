#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    list<char>l;
	    l.push_back(s[0]);
	    int m =1;
	    for(int i=1;i<n;i++)
	    {
	        if(find(l.begin(),l.end(),s[i])==l.end())
	        {
	           l.push_back(s[i]); 
	        }
	        else
	        {
	            while(l.front()!=s[i])
	            l.pop_front();
	            
	            l.pop_front();
	            l.push_back(s[i]);
	        }
	        if(l.size()>m)
	        m=l.size();
	    }
	    cout<<m<<endl;
	    
	}
	return 0;
}
