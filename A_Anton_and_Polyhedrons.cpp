#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
    int nf=0;
	vector<string> vec(tc);
    for(int i=0;i<tc;++i)
    {
        cin>>vec[i];
    }
    for(int i=0;i<tc;++i)
    {
        if(vec[i][0]=='T')
            nf+=4;
        else if(vec[i][0]=='C')
            nf+=6;
        else if(vec[i][0]=='O')
            nf+=8;
        else if(vec[i][0]=='D')
            nf+=12;
        else if(vec[i][0]=='I')
            nf+=20;
    }
	cout<<nf;
    return 0;
}