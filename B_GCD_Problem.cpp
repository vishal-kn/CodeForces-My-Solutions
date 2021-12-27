#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vec vector<int>
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
	while(tc--)
	{
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n-3<<" "<<"2 "<<"1\n";
        }
        else
        {
            ll num=(n-1)/2;
            if(num%2==0)
            cout<<num-1<<" "<<num+1<<" "<<"1\n";
            else
            cout<<num+2<<" "<<num-2<<" "<<"1\n";
        }
    }
	
	
    return 0;
}