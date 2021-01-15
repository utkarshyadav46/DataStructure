#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string arr[28]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
        string output="";
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            output+="0";
            else
            {
                output+=arr[str[i]-'A'];
            }
        }
        cout<<output<<endl;

    }
}
