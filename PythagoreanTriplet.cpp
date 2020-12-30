//pythagorean Triplet 
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int a[], int n) {
	    // code here
	    for( int i=0;i<n;i++)
	    a[i]=a[i]*a[i];
	    sort(a,a+n);
	    for(int i=n;i>=0;i--)
	    {
	        int l=0;
	        int r=n-1;
	        
	        while(l<r)
	        {
	            if(a[l]+a[r]==a[i])
	            return true;
	            else
	            (a[l]+a[r]<a[i])?l++:r--;
	        }
	    }
	    return false;
	}
};
