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
		vector<int>v;
		stack<int>s;
		cin>>n;
		int a[1000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int j=n-1;j>=0;j--)
		{
			if(s.size()==0)
			{
				v.push_back(-1);	
			}
		    else if(s.size()!=0 && s.top()>a[j])
			{
					v.push_back(s.top());
			}
			else if(s.size()>0 &&  s.top()<=a[j])
			{
				while( s.size()>0 && s.top()<=a[j])
				{
				s.pop();
				}
				if(s.size()==0)
				{
				v.push_back(-1);
				}  
			    else if(s.top()>a[j] && s.size()!=0)
				{
					v.push_back(s.top());
				}
					
			}
			
			s.push(a[j]);
			
		}
		reverse(v.begin(),v.end());
		
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
