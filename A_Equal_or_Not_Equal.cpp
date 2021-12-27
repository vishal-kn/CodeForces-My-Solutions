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
        string str;
        cin>>str;
        int count_E=count(str.begin(),str.end(),'E');
        int count_N=count(str.begin(),str.end(),'N');
        if(count_N>1 || count_N==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	
    return 0;
}