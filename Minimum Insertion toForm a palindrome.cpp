#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
    return a>b?a:b;
}

int LCS(string a)
{
 int n=a.length();
 int dp[n+1][n+1];
 string b="";
 
 for(int i=n-1;i>=0;i--)
 b=b+a[i];
 
 
 
 
 for(int i=0;i<=n;i++)
 {
     for(int j=0;j<=n;j++)
     {
         if(i==0 || j==0)
         dp[i][j] = 0;
         else if(a[i-1] == b[j-1])
         dp[i][j] = 1 + dp[i-1][j-1];
         else
         dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
     }
     
    }
    
     return dp[n][n];
 
}



int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        string str;
        cin>>str;
             int l = LCS(str);
             str=str<<1;
             cout<<str;
        cout<<str.length()-l<<endl;
     }
	//code
	return 0;
}
