#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc,x,y,x0,y0;
	cin>>tc;
	while(tc--)
	{
        cin>>x>>x0>>y>>y0;
        while(x0--)
            x*=10;
        while(y0--)
            y*=10;
        if(x>y)
            cout<<">";
        else if(x==y)
            cout<<"=";
        else
            cout<<"<";
        cout<<"\n";

	}
	
    return 0;
}