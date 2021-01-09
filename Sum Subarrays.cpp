ll findSubarray(vector<ll> arr, int n ) {
    //code here
    
    
    ll sum=0,temp=0;
    ll c=0;
    unordered_map<int ,int>m;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
        if(m.find(temp)!=m.end())
        {
            sum=sum+m[temp];
            m[temp]++;
        }
        else
        {
            m[temp]++;
        }
    }
   return sum; 
}

