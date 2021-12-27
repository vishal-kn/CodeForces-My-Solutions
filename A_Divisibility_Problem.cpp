#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
	while(tc--)
	{
        ll a,b,qt,ans;
        cin>>a>>b;
        if(a%b!=0)
        {
            qt=a/b;
            ans=((qt+1)*b) - a;
            cout<<ans;
        }
        else
        cout<<"0";

        cout<<"\n";
	}
	
    return 0;
}