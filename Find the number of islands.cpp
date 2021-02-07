int R=0,C=0;
bool issafe (int i,int j)
{
    if(i<R && j<C && i>=0 && j>=0) 
    return true;
    return false;
}

int findIslands(vector<int> v[], int N, int M) {
R=N;
C=M;
int no=0;
for(int i=0;i<N;i++)
{
    for(int j=0;j<M;j++)
    {
        if(v[i][j]==1)
        {
            if(issafe(i+1,j) && v[i+1][j]==1)
            {
                v[i+1][j]=0;
                
            }
             if(issafe(i+1,j+1) && v[i+1][j+1]==1)
            {
                v[i+1][j+1]=0;
             
            }
             if(issafe(i+1,j-1) && v[i+1][j-1]==1)
            {
                v[i+1][j-1]=0;
            
            }
             if(issafe(i-1,j-1) && v[i+1][j-1]==1)
            {
                v[i+1][j]=0;
               
            }
             if(issafe(i-1,j+1) && v[i-1][j+1]==1)
            {
                v[i-1][j-1]=0;
              
            }
             if(issafe(i-1,j) && v[i-1][j]==1)
            {
                v[i-1][j]=0;
        
            }
             if(issafe(i,j+1) && v[i][j+1]==1)
            {
                v[i][j+1]=0;
             
            }
            if(issafe(i,j-1) && v[i][j-1]==1)
            {
                v[i][j-1]=0;
            
            }
            no++;
          
        }
    }
    
}

return no;
    // Your code here
}

