//SearchELement in Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>&a, int target) {
        int n=a[0].size();
        
        int m=a.size();
        int i=0,j=n-1;
        int l=0,h=m*n-1;
        int mid,x,y;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            x=mid/n;
            y=mid%n;
            if(a[x][y]==target)
            return true;
            else if(a[x][y]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
};
