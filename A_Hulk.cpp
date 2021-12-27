#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
    vector<string> vec;
    string one="I hate that ";
    string two="I love that ";
    
    string ed=" it";
    for(int i=0;i<101;i++)
    {
        vec.push_back(one);
        vec.push_back(two);
    }
    for(int i=0;i<tc;i++)
    {
        if(i==tc-1)
        {
                vec[i][7]='i';
                vec[i][8]='t';
                vec[i].erase( vec[i].begin()+9,vec[i].end() );

        }
    }
      for(int i=0;i<tc;i++)
    {
        cout<<vec[i];
    }

    while(tc--)
	{
    
	}
	
    return 0;
}