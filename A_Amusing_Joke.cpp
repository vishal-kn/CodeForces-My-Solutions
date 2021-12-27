#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string a,b,c,s;
    cin>>a>>b>>c;
    s=a+b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());
    if(s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}