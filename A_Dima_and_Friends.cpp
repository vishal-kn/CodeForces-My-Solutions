#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int sum_f=0,dim=0;
    for(int i=0;i<n;++i)
    {
        sum_f+=arr[i];
    }
    
	
	
    return 0;
}