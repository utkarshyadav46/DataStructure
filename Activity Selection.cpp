struct Activity{
    int s,e;
};
bool compare(Activity a,Activity b)
{
   return a.e<b.e; 
}

int activitySelection(int start[], int end[], int n){
    // Your code here
    Activity a[n];
    for(int i=0;i<n;i++)
    {
        a[i].s=start[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i].e=end[i];
    }
    
    sort(a,a+n,compare);
    
    int c=1,j=0;
    for(int i=1;i<n;i++)
    {
        if(a[i].s>=a[j].e)
        {c++;
        j=i;
        }
    }
    
    return c;
    
}
