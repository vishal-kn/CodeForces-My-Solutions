#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,ans=0;
     cin>>n;
     vector <int> v1;
     vector <int> v2;
     for(int i=0;i<n;++i)
    {
        int a,b;cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
    }
     for(int i=0;i<v1.size();++i)
    {
        if( v2[i] - v1[i] > 1 )
            ans++;
    }
    cout<<ans;
    return 0;

 }