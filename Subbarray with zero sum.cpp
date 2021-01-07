
//Complete this function
bool subArrayExists(int a[], int n)
{
    unordered_map<int,int>map;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0 || map[sum]==1 || a[i]==0)
        return true;
        else
        map[sum]=1;
    }
    return false;
    //Your code here
}



