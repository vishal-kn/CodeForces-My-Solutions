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

	int a,b,c,d;
    cin>>a>>b>>c>>d;
    set <int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    cout<<4-st.size();
    return 0;
}