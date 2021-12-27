/* Author: Vishal Kanoujiya */

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

/*#####################################################*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll tc;
	cin>>tc;
	while(tc--)
	{
      ll n,H,max,maxl,c=0;
      vector<int> vec;
      vector<int> ::iterator it;
      cin>>n>>H;
      for(int i=0;i<n;++i)
        {
            int num;
            cin>>num;
            vec.push_back(num);
        }
    it=max_element(vec.begin(),vec.end());
    max=*it;
    vec.erase(it);
    it=max_element(vec.begin(),vec.end());
    maxl=*it;
    while(1)
    {
        H-=max;
        c++;
        if(H<=0)
            break;
        H-=maxl;
        c++;
        if(H<=0)
            break;
    }
        cout<<c<<"\n";
	}
	
    return 0;
}