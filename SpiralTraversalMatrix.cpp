// Spiral Traversal Matrix
class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > a, int R, int C) 
    {
        vector<int>v;
        int i=0,k=0,l=0;
        while(k<R && l<C)
        {
            
            for( int i=l;i<C;i++)
            v.push_back(a[k][i]);
            k++;
            for( int i=k;i<R;i++)
            v.push_back(a[i][C-1]);
            C--;
            if(k < R)
            {
            for(int i=C-1;i>=l;i--)
            v.push_back(a[R-1][i]);
            R--;
            }
            if(l<C)
            {
            for(int i=R-1;i>=k;i--)
            v.push_back(a[i][l]);
            l++;
            }
        }
        // code here
        
        return v;
    }
};
