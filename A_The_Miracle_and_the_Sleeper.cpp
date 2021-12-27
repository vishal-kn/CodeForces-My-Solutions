#include <bits/stdc++.h>
using namespace std;
main()
{
    long long tc,l,r,maxmod,max;
    cin>>tc;
    while(tc--)
    {
        cin>>l>>r;
        maxmod=0;
            if(r<l*2)
            cout<<r-l<<endl;
            else
            cout<<(r-1)/2<<endl;
    }
    return 0;
}