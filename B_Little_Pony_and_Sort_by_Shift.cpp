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
        cin>>n;
        vec.push_back(n);
    }
    int idx,count=0;
    for(int i=0;i<tc-1;++i)
    {
        if(vec[i]>vec[i+1])
        {
            idx=i;
            count++;
        }
           
    }
    if(vec[tc-1]>vec[0]) // to avoid out_of_bound
    {
        idx=tc-1;
        count++;
    }
    if(count==0)
    cout<<"0\n";
    else if(count>1)
    cout<<"-1\n";
    else
    cout<<tc-1-idx<<"\n";
	
    return 0;
}