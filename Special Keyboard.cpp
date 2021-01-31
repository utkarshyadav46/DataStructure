// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:

int a[1000];

Solution(){
    for(int i=0;i<=1000;i++)
    a[i]=-1;
}
    unsigned long long int optimalKeys(int n){
        // code here
        
        if(n<=6)
        return a[n]=n;
        
        if(a[n]!=-1)
        return a[n];
        int max=0;
        int cur=0;
        for(int b=n-3;b>=1;b--)
        {
            cur=(n-b-1)*optimalKeys(b);
            if(cur>max)
            max=cur;
        }
        
        return a[n]=max;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code EndsNn
