/* Author: Vishal Kanoujiya */

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
       ll a,b,c,k=0;

       cin>>a>>b>>c;
       cout<<max(max(b,c)-a+1,k)<<" "<<max(max(c,a)-b+1,k)<<" "<<max(max(a,b)-c+1,k)<<'\n';
	}
	
    return 0;
}