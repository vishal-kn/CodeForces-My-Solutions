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
        ll t,w,h;
        cin>>w>>h;
        vector<ll> v1(4);
        for(int i=0;i<4;++i)
        {
            cin>>t;
            vector<ll> v2(t);
            for(int j=0;j<t;j++)
            {
                cin>>v2[j];
            }
            sort(v2.begin(),v2.end());
            v1[i]=v2[t-1]-v2[0];

        }
        v1[0]*=h;
        v1[1]*=h;
        v1[2]*=w;
        v1[3]*=w;
        sort(v1.begin(),v1.end());
        cout<<v1[3]<<"\n";
    }
	
    return 0;
}