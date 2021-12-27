#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
    vector<int> vec;
        for(int i=0;i<tc;++i)
        {
            int n;
            cin>>n;vec.push_back(n);
        }
            int mn=min_element(vec.begin(),vec.end())-vec.begin();
            int mx=max_element(vec.begin(),vec.end())-vec.begin();
            for(int i=mn+1;i<vec.size();++i)
            {
                if(vec[mn]==vec[i])
                    mn=i;
            }
            if(mx==0<mn==vec.size()-1)
            {
                cout<<"0";
            }
            else if(mx<mn)
            {
                cout<<mx+(vec.size()-mn)-1;
            }
            else
            {
                cout<<mx+(vec.size()-mn)-2;
            }
	
    return 0;
}