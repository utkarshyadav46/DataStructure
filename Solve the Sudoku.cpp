// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  

bool SolveSudoku(int grid[N][N]);

void printGrid(int grid[N][N]);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		
		if (SolveSudoku(grid) == true)  
            printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}// } Driver Code Ends

bool isSafe(int a[N][N],int row,int col,int num)
{
    for(int i=0;i<N;i++)
    {
        if(a[row][i]==num )
        {
            return false;
        }
        if(a[i][col]==num)
        {
            return false;
        }
    }
    
    int startRow=row-row%3;
    int startCol=col-col%3;
    
    for( int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          if(a[startRow+i][startCol+j]==num)
          return false;
        }
    }
    
    return true;
}

bool solve(int grid[N][N],int row,int col)
{
    if(row==N-1 && col==N)
    return true;
    
    if(col==N)
    {row++;
    col=0;
    }
    
    if(grid[row][col]>0)
    {
        return solve(grid,row,col+1);
    }
    for(int i=1;i<=N;i++)
    {
       if(isSafe(grid,row,col,i))
       {
           grid[row][col]=i;
           if(solve(grid,row,col+1))
           return true;
           
       }
       grid[row][col]=0;
       
    }
    
    return false;
    
}


bool SolveSudoku(int grid[N][N])  
{ 
   return  solve(grid,0,0);
    // Your code here
}

void printGrid (int grid[N][N]) 
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<grid[i][j]<<" ";
        }
         }
    // Your code here 
}
