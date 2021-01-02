
	// Function to find maximum product subarray
	
	long long maxProduct(int *arr, int n) {
	    
	   vector<long long int>a;
	   for(int i=0;i<n;i++)
	   {
	       a.push_back(arr[i]);
	   }
	  long long int minvalue=a[0];
	 long long   int maxvalue=a[0];
	  long long  int res=a[0],temp;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]<0)
	        {
	            temp=minvalue;
	            minvalue=maxvalue;
	            maxvalue=temp;
	        }
	        maxvalue=max(a[i],a[i]*maxvalue);
	        minvalue=min(a[i],a[i]*minvalue);
	        res=max(res,maxvalue);
	    }
	    return res;
	}
