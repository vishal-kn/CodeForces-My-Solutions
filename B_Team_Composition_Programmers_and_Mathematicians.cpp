#include <bits/stdc++.h>
using namespace std;

int main()
{
   int tc;
   cin>>tc;
   while (tc--)
   {
       /* code */
    long long int a,b;
    cin>>a>>b;
    long long int p=(a+b)/4;
    long long int q=min(a,b);
    long long int ans=min(p,q);
    cout<<ans<<"\n";

   }
   return 0;
}