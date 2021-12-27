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

	int tc;
	cin>>tc;
	while(tc--)
	{
        ll n;cin>>n;
        if(n==1 || n==2)
        {
            cout<<"1"<<endl;continue;
        }
        if(n%2==0)
        {
            n--;
            n/=2;
            n++;
            cout<<n<<endl;continue;
        }
        else
        {
            n/=2;
            n++;
            cout<<n<<endl;continue;
        }
	}
	
    return 0;
}