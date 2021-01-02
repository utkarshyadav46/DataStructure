int equilibriumPoint(long long a[], int n) {

if(n==1)
return 1;
int l,h;
int sum=0;
for(int i=0;i<n;i++)
{
    sum+=a[i];
}
int suml=0;
for(int i=0;i<n;i++)
{
    sum-=a[i];
    if(suml==sum)
    return i+1;
    suml+=a[i];
}
return -1;
    // Your code here
}
