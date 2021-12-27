#include <bits/stdc++.h>
using namespace std;

int main()
{
string p;
cin>>p;
int count=0;
for(int i=0;i<p.size();i++)
{
    if(p[i]=='H' || p[i]=='9' || p[i]=='Q' )
        count++;
}
    if(count!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";

   return 0;
}