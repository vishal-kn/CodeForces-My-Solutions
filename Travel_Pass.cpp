#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n,a,b,state,dist;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>a>>b;
        char st[n];
        for(int i=0;i<n;++i)
        {
            cin>>st[i];
        }
        dist=0,state=0;
        for(int i=0;i<n;++i)
        {
            if(st[i]=='0')
                dist+=a;
            else
            state+=b;
        }
        cout<<dist+state<<"\n";
    }
    return 0;
}