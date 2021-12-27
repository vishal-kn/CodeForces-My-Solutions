#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        char st[n];
        for(int i=0;i<n;++i)
        cin>>st[i];
        for(int i=0;i<n;++i)
        {
            if(st[i]=='U')
            st[i]='D';
            else if(st[i]=='D')
            st[i]='U';
        }
        for(int i=0;i<n;++i)
        cout<<st[i];

        cout<<"\n";
    }
    return 0;
}