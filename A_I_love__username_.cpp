#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int tc;
	cin>>tc;
    int n;
    vector<int> vec;
	for(int i=0;i<tc;i++)
	{
        cin>>n;
        vec.push_back(n);
	}
    int count=0,max=0,min=0;
    for(int i=1;i<tc;i++)
    {

        if(vec[i]>vec[max])
        {
            max=i;
            count++;
        }
        else if(vec[i]<vec[min])
        {
            min=i;
            count++;
        }
        
    }
    
    cout<<count;
	
    return 0;
}