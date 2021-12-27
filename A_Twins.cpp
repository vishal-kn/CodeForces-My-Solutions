#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ll tc;
    cin>>tc;
    vector<int> v;
    ll sum=0,coin=0;
    for(int i=0;i<tc;++i)
    {
        int n;
        cin>>n;
        v.push_back(n);
        sum+=v[i];
    }
    sum/=2;
    sort(v.begin(),v.end());
    int hf=0,count=0;
    for(int i=tc-1;i>=0;i--)
    {
            hf+=v[i];
            ++count;
            if(hf>sum)
                 break;
    }
       cout<<count;

       return 0;
}