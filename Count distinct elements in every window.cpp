
vector <int> countDistinct (int a[], int n, int k)
{
    
    vector<int>v;
    int dis=0;
    unordered_map<int ,int>m;
    for(int i=0;i<k;i++)
    {
        if(m[a[i]]==0)
        dis++;
        
        m[a[i]]++;
    }
    v.push_back(dis);
    
    for(int i=k;i<n;i++)
    {
        if(m[a[i-k]]==1)
        dis--;
        m[a[i-k]]--;
        if(m[a[i]]==0)
        dis++;
        m[a[i]]++;
        v.push_back(dis);
    }
    
    return v;
    //code here.
}
