
int minJumps(int a[],int n)
{
int  step=a[0];
int maxreach=a[0];
int jump=1;

if(n==1)
return 0;

for(int i=1;i<n;i++)
{
    if(a[0]==0)
    return -1;
    if(i==n-1)
    return jump;
    maxreach=max(maxreach,a[i]+i);
    step--;
    if(step==0)
  {  jump++;
        if(i>=maxreach)
        return -1;
    step=maxreach-i;
  } 
    
}
}

