
vector<int> leaders(int a[], int n){
    // code here
    vector<int>v;
    stack<int>s;
    s.push(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(s.top()<=a[i])
        s.push(a[i]);
    }
    
    while(!s.empty())
    {
        int t=s.top();
        v.push_back(t);
        s.pop();
    }
    return v;
}

