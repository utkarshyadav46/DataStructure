// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;



void sortA1ByA2(int a1[], int n, int a2[], int m);

// Driver program to test above function 
int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    int a1[n];
	    int a2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
// } Driver Code Ends


//User function template in C++

// A1[] : the input array-1
// N : size of the array A1[]
// A2[] : the input array-2
// M : size of the array A2[]
void sortA1ByA2(int A1[], int N, int A2[], int M) 
{
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    int A3[N];
     for(int i=0;i<N;i++)
    {
        m1[A1[i]]++;
    }
    for(int i=0;i<M;i++)
    {
        
        m2[A2[i]]=1;
    }
    int k=0;
    for(int i=0;i<M;i++)
    {
        if(m1.find(A2[i])!=m1.end())
        {
            int temp=m1[A2[i]];
            while(temp--)
            {
               A3[k]=A2[i];
                k++;
            }
        }
    }
    
    int f=0;
    vector<int>v;
    for(int i=0;i<N;i++)
    {
        if(m2.find(A1[i])!=m2.end())
        {
            f=0;   
        }
        else
        {
         v.push_back(A1[i]);
        }
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
       A1[i]=A3[i];
    }
 
    for(int i=k;i<k+v.size();i++)
    {
       A1[i]=v[i-k];
    }
     //Your code here
} 
