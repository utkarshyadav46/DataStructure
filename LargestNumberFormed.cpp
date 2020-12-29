
//Largest Number formed from array of string 


class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	bool static comp(string s1,string s2)
	{
	    return s1+s2>s2+s1;
	}
	
	string printLargest(vector<string> &a) {
	    sort(a.begin(),a.end(),comp);
	    string ans="";
	    for(int i=0;i<a.size();i++)
	    {
	        ans+=a[i];
	    }
	    
	    return ans;
	    
	}
};
