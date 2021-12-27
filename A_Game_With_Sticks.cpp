#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,m,t;cin>>n>>m;
    t=min(n,m);
    if(t%2==0)
        cout<<"Malvika";    
	else
        cout<<"Akshat";
    return 0;
}