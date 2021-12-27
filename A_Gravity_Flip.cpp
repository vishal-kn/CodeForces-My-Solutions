#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
	vector<int> v;
    for(int i=0;i<tc;++i)
    {
        int n;
        cin>>n;v.push_back(n);
    }
    sort(v.begin(),v.end());
        for(int i=0;i<tc;++i)
    {
        cout<<v[i]<<" ";
    }
        return 0;
}