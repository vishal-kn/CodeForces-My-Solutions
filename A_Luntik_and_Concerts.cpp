#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vec vector<int>
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)

/*#####################################################*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc;
	cin>>tc;
	while(tc--)
	{
        ll a,b,c;
        cin>>a>>b>>c;
        
        ll total=( a * 1 )+( b * 2 )+( c * 3);
        total %= 2;
        cout<<total<<"\n";
	}
	
    return 0;
}