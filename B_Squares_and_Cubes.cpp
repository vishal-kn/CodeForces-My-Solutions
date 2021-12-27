#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(set<ll>st)
{
    ll n;cin>>n;
    int i=1;
    while(i*i<=n)
        {
            st.insert(i*i);
            i++;
        }
    i=1;
    while (i*i*i<=n)
    {
        st.insert(i*i*i);
        i++;
    }
    cout<<st.size();
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc;
	cin>>tc;
    set<ll> st;
    
	while(tc--)
    {
        solve(st);
        cout<<"\n";
    }
	
    return 0;
}