
int t[31][31];

int count(string s,int start,int end)
{
    if(start>end)
    return 0;
    if(start==end)
    return 1;
    if(t[start][end]!=-1)
    return t[start][end];
    if(s[start]==s[end])
    {
        return t[start][end]=1+count(s,start+1,end)+count(s,start,end-1);
    }
    else
      return t[start][end]=count(s,start+1,end)+count(s,start,end-1)-count(s,start+1,end-1);
}




int countPS(string str)
{
    
    memset(t,-1,sizeof(t));
     return count(str,0,str.length()-1);
}
