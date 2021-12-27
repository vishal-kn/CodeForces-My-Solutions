#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc;
	cin>>tc;
	while(tc--)
	{
       ll n,qt;
       cin>>n;
       if(n%2==0)
       {
           qt=(n/2);
           cout<<qt-1<<"\n";
       }
       else
        cout<<n/2<<"\n";

	}
	
    return 0;
}