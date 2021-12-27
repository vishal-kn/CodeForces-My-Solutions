#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,a,b,c,d,e;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b>>c>>d>>e;
       if( a+b<=d && c<=e ||b+c<=d && a<=e ||c+a<=d && b<=e )
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
    }
    return 0;
}